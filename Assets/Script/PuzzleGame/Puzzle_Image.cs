using Assets.Script.PuzzleGame;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor.Rendering;
using UnityEngine;

public class Puzzle_Image : MonoBehaviour
{
    private Vector3 homePosition;

    // Start is called before the first frame update
    void Start()
    {
        homePosition = transform.position;
    }

    // Update is called once per frame
    void Update()
    {

    }




    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (GameElement.Puzzle.IsSelected(this.gameObject))
        {
            Debug.Log($"OnTriggerEnter2D  :{this.name} On ==> {collision.gameObject.name}");
            GameElement.Puzzle.Drag(collision.gameObject);
        }
    

    }

    private void OnTriggerExit2D(Collider2D collision)
    {

        if (GameElement.Puzzle.IsSelected(this.gameObject))
        {
            GameElement.Puzzle.NoDrag();
        }

    }

    internal void GotoHome()
    {
        transform.position = homePosition;
    }
}
