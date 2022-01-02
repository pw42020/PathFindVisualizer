using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;


public class TileScript : MonoBehaviour
{

    public List<Vector3Int> neighbors = new List<Vector3Int>();

    public float weight = 1;
    public float distance = float.PositiveInfinity;
    public bool isWall, isFound;
    public Vector3Int coords = new Vector3Int();

}
