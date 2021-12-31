using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

[CreateAssetMenu]
public class TileScript : ScriptableObject
{

    public TileBase[] tiles;

    public List<TileBase> neighbors = new List<TileBase>();

    public float weight = 1;
    public bool isStart, isFinish, isWall, isFound;

}
