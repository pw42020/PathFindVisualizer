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
        Vector3 coords = GetComponent<Transform>().position;

        mapManager.setFinish(Vector3Int.RoundToInt(coords - new Vector3(0.5f, 0.5f, 0)));

        if (Input.GetMouseButtonUp(0)){ // snapping function

            GetComponent<Transform>().position = Vector3Int.RoundToInt(coords - new Vector3(0.5f, 0.5f, 0)) + new Vector3(0.5f, 0.5f, 0);
        }
    }
}
