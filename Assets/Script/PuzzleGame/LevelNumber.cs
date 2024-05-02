using Assets.DataLayer;
using Assets.Script.PuzzleGame;
using Assets.Script.PuzzleGame.Common;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class LevelNumber : MonoBehaviour
{
    [SerializeField] Image NumberFrame;
    [SerializeField] TextMeshProUGUI tex_LevelNumber;



    internal void LevelComplete()
    {
        NumberFrame.color = UnityData.green;
    }

    // Start is called before the first frame update
    void Start()
    {
    }


    internal void ChaneToLevel(int level, bool IsComplete)
    {
        tex_LevelNumber.text = level.ToString();
        if (IsComplete)
            LevelComplete();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
