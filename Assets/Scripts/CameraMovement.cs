using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    [SerializeField]
    private MapManager mapManager;

    private Vector3 initPosR = new Vector3();
    private Vector3 newPosR = new Vector3();

    private Vector3 initPos = new Vector3();
    private Vector3 newPos = new Vector3();


    public GameObject start;
    public GameObject finish;

    private string func = null; // string that chooses what function is used 

    private void Awake()
    {
        mapManager = FindObjectOfType<MapManager>();

    }

    void Update()
    {
        // CAMERA SCROLLING BEGIN

        if(Input.GetMouseButtonDown(1)) { // getting initial mouse point
            
            initPosR = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        }
        
        if(Input.GetMouseButton(1)){ // getting new mouse point

            newPosR = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            transform.position += initPosR - newPosR; // moving camera amount mouse has moved
        }

        if(Input.GetMouseButtonUp(1)){ // make it stop after user stops holding down

            initPosR = new Vector3(0, 0, 0);
            newPosR = new Vector3(0, 0, 0);
        }

        // CAMERA SCROLLING END

        // FLAG MOVING BEGIN
        
        if(Input.GetMouseButtonDown(0)){
        
            if(Vector3Int.RoundToInt(Camera.main.ScreenToWorldPoint(Input.mousePosition) - new Vector3(0.5f, 0.5f, -1))
                 == mapManager.start){
                
                func = "start";

            }// if left click on start

            if(Vector3Int.RoundToInt(Camera.main.ScreenToWorldPoint(Input.mousePosition) - new Vector3(0.5f, 0.5f, -1))
                 == mapManager.finish){
                
                func = "finish";
                
            }// if left click on finish

        }// if pressed mousebutton(0)

        if(Input.GetMouseButton(0)){

            newPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            if(func == "finish"){

                finish.GetComponent<Transform>().position = newPos + new Vector3(0, 0, 1);
            }
            if(func == "start"){

                start.GetComponent<Transform>().position = newPos + new Vector3(0, 0, 1);
            }
        }

        if(!Input.GetMouseButton(0)){

            initPos = new Vector3(0, 0, 0);
            newPos = new Vector3(0, 0, 0);

            func = null;
        }

        // FLAG MOVING END

    }// void Update
}// class CameraMovement
