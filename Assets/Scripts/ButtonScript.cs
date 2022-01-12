using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public class ButtonScript : MonoBehaviour
{
    [SerializeField]
    private MapManager mapManager;

    [SerializeField]
    private Tilemap map;

    [SerializeField]
    private Dijkstra dijkstra;

    public Text text;
    public Slider slider;

    private bool turnWall = false;
    private bool hasReset = true;

    public void wallSelectButton()
    {
        turnWall = !turnWall;
        Debug.Log($"Can turn tiles to walls: {turnWall}");
    } // OnButtonPress()

    public void moveSlider()
    {
        text.text = "Speed: " + slider.value;
        dijkstra.speed = slider.value;

    }

    void Update()
    {
        if(Input.GetMouseButton(0) && turnWall){

            Vector3 coords = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            changeToWall(Vector3Int.RoundToInt(coords + new Vector3(0, 0, 1)));
        } // if turnWall


    } // void Update()

    void changeToWall(Vector3Int coords)
    {
        mapManager.tiles[coords].isWall = true;
        mapManager.tiles[coords].weight = float.PositiveInfinity; // changing it so you can't pass through wall
        
        map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
        map.SetColor(coords, new Color(0.2f, 0.2f, 0.2f, 1)); // changing color to gray
    } // changeToWall()

    public void resetButton() // change all tiles back to white, all distances back to infinity
    {
        foreach(Vector3Int coords in mapManager.tiles.Keys){
            mapManager.tiles[coords].isWall = false;
            mapManager.tiles[coords].isPath = false;
            mapManager.tiles[coords].weight = 1;
            mapManager.tiles[coords].distance = float.PositiveInfinity;

            if(coords != mapManager.start && coords != mapManager.finish){ // keeping start and finish the color they should be

                map.SetTileFlags(coords, TileFlags.None);
                map.SetColor(coords, new Color(1, 1, 1, 1));
            }

        }
        hasReset = true;
    } // reset()

    public void playButton()
    {
        if(hasReset){
            StartCoroutine(dijkstra.startAlgorithm());
            hasReset = false;
        }
        
    } // go()
}
