using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishScript : MonoBehaviour
{
    
    private MapManager mapManager;

    private void Awake()
    {
        mapManager = FindObjectOfType<MapManager>();
    }

    // Update is called once per frame
    private void Update()
    {
        Vector3Int coords = Vector3Int.RoundToInt(GetComponent<Transform>().position);

        mapManager.setFinish(coords);
    }
}
