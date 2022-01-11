using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;


public class TileScript
{
    [SerializeField]
    private Tilemap map;

    public List<Vector3Int> neighbors = new List<Vector3Int>();

    public float weight = 1;
    public float distance = float.PositiveInfinity;
    public bool isWall, isFound, isPath;
    public Vector3Int coords = new Vector3Int();
    public Vector3Int pred = new Vector3Int();

}
