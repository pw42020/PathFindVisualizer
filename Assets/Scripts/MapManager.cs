using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class MapManager : MonoBehaviour
{

    [SerializeField]
    private Tilemap map;

    public Dictionary<Vector3Int,List<Vector3Int>> neighbors = new Dictionary<Vector3Int,List<Vector3Int>>();

    public Vector3Int start = new Vector3Int();

    public Vector3Int finish = new Vector3Int();

    void Start()
    {

        for (int x = (int) map.localBounds.min.x; x < map.localBounds.max.x; x++){
            for (int y = (int) map.localBounds.min.y; y < map.localBounds.max.y; y++){

                // adding every tile and its four neighbors to a dictionary at Start
                Vector3Int t = new Vector3Int(x, y, 0);
                List<Vector3Int> temp = new List<Vector3Int>();

                //Applying for fringe cases where x+-1, y+-1 is outside of border

                if (x-1 >= (int) map.localBounds.min.x){

                    temp.Add(new Vector3Int(x-1, y, 0));
                }

                if (x+1 <= map.localBounds.max.x){

                    temp.Add(new Vector3Int(x+1, y, 0));
                }
                
                if (y-1 >= (int) map.localBounds.max.y){

                    temp.Add(new Vector3Int(x, y-1, 0));
                }
                
                if (y+1 <= map.localBounds.max.y){

                    temp.Add(new Vector3Int(x, y+1, 0));
                }

                neighbors.Add(t,temp); // Adding tile and its four neighbors to neighbors Dictionary
            }
        }
    }

    void Update()
    {
        //Debug tools for me, remove at finish
        if(Input.GetMouseButtonDown(0)){

            Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Vector3Int gridPos = map.WorldToCell(mousePosition);

            TileBase clickedTile = map.GetTile(gridPos);
            Debug.Log(gridPos);
        }
    }

    public void setStart(Vector3Int coords)
    {
        if (coords != start){ // setting new start as start GameObject is moved by user

            map.SetColor(start, new Color(1, 1, 1, 1));
        }

        map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
        map.SetColor(coords, new Color (1, 0, 0, 1)); // changing color to red

        start = coords;

    }

    public void setFinish(Vector3Int coords)
    {
        if (coords != finish){ // setting new start as start GameObject is moved by user

            map.SetColor(finish, new Color(1, 1, 1, 1));
        }

        map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
        map.SetColor(coords, new Color (0, 1, 0, 1)); // changing color to red

        finish = coords;

    }
}
