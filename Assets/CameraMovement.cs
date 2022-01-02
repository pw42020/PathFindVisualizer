using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    public float cameraSpeed = 2f;

    private Vector3 initPos = new Vector3();
    private Vector3 newPos = new Vector3();

    void Update()
    {

        if(Input.GetMouseButtonDown(1)){ // getting initial mouse point
            
            initPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        }

        if(Input.GetMouseButton(1)){ // getting new mouse point

            newPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        }
        
        transform.position += initPos - newPos; // moving camera amount mouse has moved
    }
}
