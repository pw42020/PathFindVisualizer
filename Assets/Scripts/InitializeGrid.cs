using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeGrid : MonoBehaviour
{
    public GameObject tile;

    GameObject[][] arr = new GameObject[100][];

    // Creating grid of Tiles
    void Start()
    {
        for (int i = 0; i < 6; i++){

            for (int j = 0; j <6; j++){

                float boxdist = 1f;
                Vector2 pos = new Vector2(j*boxdist, i*boxdist);
                
                var obj = Instantiate(tile, pos, Quaternion.identity);
                obj.name = "(" + j.ToString() + ", " + i.ToString() + ")"; // changing the name for easy callbacks
            }
        }
    }

    void Update()
    {


    }
}
