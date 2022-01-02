using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using MS.Internal;

public class Dijkstra : MonoBehaviour
{
    private MapManager mapManager;

    private PriorityQueue<TileBase> pQ;
    
    [SerializeField]
    private Tilemap map;

    private void Awake()
    {
        mapManager = FindObjectOfType<MapManager>();
    }

    void startAlgorithm()
    {
        foreach(var tile in mapManager.neighbors)
        {
            //pq.Push(tile);
        }

    }
}
