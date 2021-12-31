using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class MapManager : MonoBehaviour
{

    [SerializeField]
    private Tilemap map;

    [SerializeField]
    private List<TileScript> tileDatas;

    private Dictionary<TileBase, TileScript> dataFromTiles;

    public Dictionary<Vector3Int,List<Vector3Int>> neighbors;

    void Start()
    {

        for (int x = (int) map.localBounds.min.x; x < map.localBounds.max.x; x++){
            for (int y = (int) map.localBounds.min.y; y < map.localBounds.max.y; y++){

                Vector3Int t = new Vector3Int(x, y, 0);
                List<Vector3Int> temp = new List<Vector3Int>();

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
                neighbors.Add(t,temp);
            }
        }
    }

    void Update()
    {
        if(Input.GetMouseButtonDown(0)){

            Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Vector3Int gridPos = map.WorldToCell(mousePosition);

            TileBase clickedTile = map.GetTile(gridPos);
            Debug.Log(gridPos);
        }
    }
}
