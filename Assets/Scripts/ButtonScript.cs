using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    private Dijkstra dijkstra;

    private void Awake()
    {
        dijkstra = FindObjectOfType<Dijkstra>();

    }

    public void OnButtonPress(){
        dijkstra.startAlgorithm();
    }
}
