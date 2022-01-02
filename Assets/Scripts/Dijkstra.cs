using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class Dijkstra : MonoBehaviour
{
    private MapManager mapManager;

    //private PriorityQueue<Vector3Int,float> pQ = new PriorityQueue<Vector3Int,float>();
    
    [SerializeField]
    private Tilemap map;

    private void Awake()
    {
        mapManager = FindObjectOfType<MapManager>();
        Debug.Log(mapManager.tiles.Count);
    }

    void startAlgorithm()
    {

    }
}
