using Assets.DataLayer;
using Assets.Script.PuzzleGame;
using Assets.Script.PuzzleGame.Common;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Fico_Puzzle_Start : MonoBehaviour
{
    [SerializeField] GameObject CanvasFade;
    [SerializeField] List<Image> GameLevelsButton;
    [SerializeField] TextMeshProUGUI text_Version;
    [SerializeField] AudioClip audioClip_Click;
    [SerializeField] AudioClip audioClip_BackMusic;

    // Start is called before the first frame update
    void Start()
    {
        GameElement._fico_Puzzle_Start = this;
        text_Version.text = $"v : {Application.version.ToString()}";

        StartCoroutine(AfterInitService());

        CanvasFade.SetActive(true);
        CanvasFade.GetComponent<Canvas_Fade>().FadeOut();

        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        source_.clip = audioClip_BackMusic;
        source_.loop = true;
        StartCoroutine(AudioFadeScript.FadeIn(source_, 0.5f, 0.7f));

    }

    void CLick_PlaySound()
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 3);
        source_.clip = audioClip_Click;
        source_.volume = 1f;
        source_.Play();
    }

    public void CloseApp()
    {
        CLick_PlaySound();
        StartCoroutine(runActionAfter(0.3f, delegate ()
        {
            Application.Quit();
        }));
    }

    public IEnumerator runActionAfter(float s, Action action)
    {
        yield return new WaitForSeconds(s);
        action.Invoke();
    }

    IEnumerator AfterInitService()
    {
        if (!ApplicationServices.ServiceIsReady)
            yield return new WaitUntil(() => !ApplicationServices.ServiceIsReady);

        var Levels = ApplicationServices.puzzleGameService.GetPuzzleLevels();

        for (int i = 0; i < GameLevelsButton.Count; i++)
        {
            if (GameLevelsButton[i] == null) continue;
            var levelImage = GameLevelsButton[i];

            if (Levels[i].IsComplete)
                levelImage.color = UnityData.green;

            if (i > 0 && Levels[i - 1].IsComplete)
                levelImage.GetComponent<Button>().interactable = true;
        }
    }

    public void GoToLLevel(int LevelId)
    {
        GameData.Level = LevelId;

        CLick_PlaySound();

        CanvasFade.GetComponent<Canvas_Fade>().Show(delegate ()
        {
            SceneManager.LoadScene(1);
        });

    }
    // Update is called once per frame
    void Update()
    {

    }
}
