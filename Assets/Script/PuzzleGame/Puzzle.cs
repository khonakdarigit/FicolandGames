using Assets.DataLayer;
using Assets.DataLayer.Domain.Models;
using Assets.Script.PuzzleGame;
using Assets.Script.PuzzleGame.Common;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Puzzle : MonoBehaviour
{
    [SerializeField] List<GameObject> puzzleFrames;


    List<Sprite> sprites = new List<Sprite>();

    private GameObject selectedPuzzleImage;
    private float deltaX;
    private float deltaY;
    private GameObject _on_Puzzle;
    private bool InGame = true;

    [SerializeField] float ColliderDragSize = 1;
    [SerializeField] float ColliderNormalSize = 3;

    [SerializeField] AudioClip audioClip_Drop;
    [SerializeField] AudioClip audioClip_shuffle;
    [SerializeField] AudioClip audioClip_youAreWinner;
    private PuzzleGameLevel _level;



    // Start is called before the first frame update
    void Start()
    {
        GameElement.Puzzle = this;


        for (int i = 0; i < puzzleFrames.Count; i++)
        {
            sprites.Add(puzzleFrames[i].GetComponent<SpriteRenderer>().sprite);
        }

        StartCoroutine(AfterInitService());


    }

    IEnumerator AfterInitService()
    {
        if (!ApplicationServices.ServiceIsReady)
            yield return new WaitUntil(() => !ApplicationServices.ServiceIsReady);

        _level = ApplicationServices.puzzleGameService.GetPuzzleLevel(GameData.Level);

        if (_level != null)
        {
            if (_level.SavedPuzzlePartLocation != null)
                LoadPartsInLocations(_level.SavedPuzzlePartLocation);
            else if (!_level.IsComplete)
            {
                StartCoroutine(shufflePuzzle());
            }
            else
            {
                InGame = false;
            }
        }
    }

    public void LoadPartsInLocations(string partLocationStr)
    {
        var partLocation = partLocationStr.Split(',').Select(c => Convert.ToInt32(c)).ToList();
        for (int i = 0; i < puzzleFrames.Count; i++)
        {
            puzzleFrames[i].GetComponent<SpriteRenderer>().sprite = sprites[partLocation[i]];
        }
    }

    public IEnumerator shufflePuzzle(bool IsFirstShuffle = true)
    {
        if (IsFirstShuffle)
            yield return new WaitForSeconds(0.5f);



        PlaySound(audioClip_shuffle);

        for (int i = 0; i < 5; i++)
        {
            var shuffle = sprites.OrderBy(c => Guid.NewGuid()).ToList();
            for (int j = 0; j < puzzleFrames.Count; j++)
            {
                puzzleFrames[j].GetComponent<SpriteRenderer>().sprite = shuffle[j];
            }
            yield return new WaitForSeconds(0.140f);
        }

        if (!IsFirstShuffle)
            StartCoroutine(SavePuzzleLocations());

        InGame = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (InGame)
            ForPuzzlePart();

    }

    public void PlaySound(AudioClip audioClip)
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 3);
        source_.clip = audioClip;
        source_.volume = 0.5f;
        source_.Play();
    }
    private void ForPuzzlePart()
    {
        if (Input.touchCount > 0)
        {
            var touch = Input.GetTouch(0);
            Vector2 touchPos = Camera.main.ScreenToWorldPoint(touch.position);





            switch (touch.phase)
            {
                case TouchPhase.Began:
                    RaycastHit2D hit = Physics2D.Raycast(touchPos, Vector2.zero);
                    if (hit.transform != null && hit.transform.CompareTag("Puzzle"))
                    {
                        selectedPuzzleImage = hit.transform.gameObject;
                        Debug.Log($"Select {selectedPuzzleImage.name}");

                        deltaX = touchPos.x - selectedPuzzleImage.transform.position.x;
                        deltaY = touchPos.y - selectedPuzzleImage.transform.position.y;

                        PuzzlePartsBoxColliderSizeTo(ColliderDragSize);
                    }



                    break;
                case TouchPhase.Moved:
                    if (selectedPuzzleImage != null)
                    {
                        selectedPuzzleImage.GetComponent<SpriteRenderer>().sortingOrder = 10;
                        selectedPuzzleImage.GetComponent<Rigidbody2D>().MovePosition(new Vector2(touchPos.x - deltaX, touchPos.y - deltaY));
                    }

                    break;

                case TouchPhase.Ended:
                    if (selectedPuzzleImage != null)
                    {
                        selectedPuzzleImage.GetComponent<Puzzle_Image>().GotoHome();

                        selectedPuzzleImage.GetComponent<SpriteRenderer>().sortingOrder = 0;
                        selectedPuzzleImage.GetComponent<Rigidbody2D>().velocity = Vector2.zero;

                        PuzzlePartsBoxColliderSizeTo(ColliderNormalSize);


                        if (_on_Puzzle != null)
                        {
                            PlaySound(audioClip_Drop);

                            var draggedSprit = selectedPuzzleImage.GetComponent<SpriteRenderer>().sprite;
                            var onSprit = _on_Puzzle.GetComponent<SpriteRenderer>().sprite;

                            selectedPuzzleImage.GetComponent<SpriteRenderer>().sprite = onSprit;
                            _on_Puzzle.GetComponent<SpriteRenderer>().sprite = draggedSprit;


                            StartCoroutine(SavePuzzleLocations());
                        }




                        if (InGame & CheckPuzzleIsComplete())
                        {

                            GameElement._gameManager.FadeBackMusicGroundTo(0.2f);

                            PlaySound(audioClip_youAreWinner);

                            Debug.Log($"Game Level {GameData.Level} Complete");
                            if (!_level.IsComplete)
                            {
                                _level.IsComplete = true;
                                _level = ApplicationServices.puzzleGameService.UpdatePuzzleLevel(_level);
                            }

                            GameElement._gameManager.LevelComplete();
                            InGame = false;

                            StartCoroutine(
                                runActionAfter(0.5f, delegate ()
                                {
                                    GameElement._gameManager.FadeAndShowWinner();
                                }));
                        }
                    }
                    break;
            }
        }
    }

    IEnumerator SavePuzzleLocations()
    {
        yield return new WaitForEndOfFrame();

        List<int> partLocation = new List<int>();
        for (int i = 0; i < puzzleFrames.Count; i++)
        {
            var sprint = puzzleFrames[i].GetComponent<SpriteRenderer>().sprite;
            int sprintIndex = sprites.FindIndex(c => c == sprint);
            partLocation.Add(sprintIndex);
        }


        if (partLocation.Where((c, i) => c != i).Any())
        {
            Debug.Log($"SavedPuzzlePartLocation True");
            _level.SavedPuzzlePartLocation = string.Join(',', partLocation);
        }
        else if (_level.IsComplete)
        {
            Debug.Log($"SavedPuzzlePartLocation False");

            _level.SavedPuzzlePartLocation = null;
        }
        _level = ApplicationServices.puzzleGameService.UpdatePuzzleLevel(_level);

    }

    public IEnumerator runActionAfter(float s, Action action)
    {
        yield return new WaitForSeconds(s);
        action.Invoke();
    }

    internal void Drag(GameObject On_Puzzle)
    {
        _on_Puzzle = On_Puzzle;
    }

    internal bool IsSelected(GameObject gameObject)
    {
        return gameObject == selectedPuzzleImage;
    }

    internal void NoDrag()
    {
        _on_Puzzle = null;
    }

    private bool CheckPuzzleIsComplete()
    {
        for (int i = 0; i < puzzleFrames.Count; i++)
        {
            if (puzzleFrames[i].GetComponent<SpriteRenderer>().sprite != sprites[i])
                return false;
        }
        return true;
    }

    private void PuzzlePartsBoxColliderSizeTo(float x)
    {
        foreach (var item in puzzleFrames)
        {
            item.GetComponent<BoxCollider2D>().size = new Vector2(x, x);
        }
    }

    internal void SetInGame(bool v)
    {
        InGame = v;
    }
}
