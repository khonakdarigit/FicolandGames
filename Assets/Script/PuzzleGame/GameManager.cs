using Assets.DataLayer;
using Assets.Script.PuzzleGame;
using Assets.Script.PuzzleGame.Common;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [SerializeField] GameObject LevelNumber;

    [SerializeField] GameObject CanvasFade;
    [SerializeField] GameObject CanvasYouWin;

    [SerializeField] List<GameObject> Levels;

    [SerializeField] AudioClip audioClip_Click;
    [SerializeField] AudioClip audioClip_BackMusic;
    private AudioSource BackMusic_source_;

    internal void FadeAndShowWinner()
    {
        CanvasFade.GetComponent<Canvas_Fade>().Show(delegate ()
        {
            CanvasYouWin.SetActive(true);
        });
    }

    internal void LevelComplete()
    {
        LevelNumber.GetComponent<LevelNumber>().LevelComplete();
    }

    // Start is called before the first frame update
    void Start()
    {
        GameElement._gameManager = this;

        StartCoroutine(AfterInitService());


        CanvasFade.SetActive(true);
        CanvasFade.GetComponent<Canvas_Fade>().FadeOut();

        BackMusic_source_ = gameObject.AddComponent<AudioSource>();
        BackMusic_source_.clip = audioClip_BackMusic;
        BackMusic_source_.loop = true;
        StartCoroutine(AudioFadeScript.FadeIn(BackMusic_source_, 0.5f, 0.5f));
    }

    public void PlaySound(AudioClip audioClip)
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 3);
        source_.clip = audioClip;
        source_.volume = 1f;
        source_.Play();
    }
    IEnumerator AfterInitService()
    {
        if (!ApplicationServices.ServiceIsReady || LevelNumber == null)
            yield return new WaitUntil(() => !ApplicationServices.ServiceIsReady || LevelNumber == null);




        LevelNumber.GetComponent<LevelNumber>().ChaneToLevel(GameData.Level, ApplicationServices.puzzleGameService.GetPuzzleLevel(GameData.Level).IsComplete);
        Levels[GameData.Level - 1].SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void shufflePuzzle()
    {
        PlaySound(audioClip_Click);
        StartCoroutine(Levels[GameData.Level - 1].GetComponent<Puzzle>().shufflePuzzle(false));
    }
    public void ToMenu()
    {
        PlaySound(audioClip_Click);
        CanvasFade.GetComponent<Canvas_Fade>().Show(delegate ()
        {
            SceneManager.LoadScene(0);
        });
    }

    public void CanvasYouWin_Close()
    {
        FadeBackMusicGroundTo(0.5f);

        PlaySound(audioClip_Click);
        CanvasYouWin.SetActive(false);
    }

    internal void FadeBackMusicGroundTo(float v)
    {
        if (BackMusic_source_.volume > v)
            StartCoroutine(AudioFadeScript.FadeOut(BackMusic_source_, 0.2f, v));
        else
            StartCoroutine(AudioFadeScript.FadeIn(BackMusic_source_, 0.2f, v));
    }
}
