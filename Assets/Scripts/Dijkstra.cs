using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class Dijkstra : MonoBehaviour
{
    private MapManager mapManager;
    
    [SerializeField]
    private PriorityQueue pq = new PriorityQueue();
    
    [SerializeField]
    private Tilemap map;

    private void Awake()
    {
        mapManager = FindObjectOfType<MapManager>();
    }

    public void go()
    {
        StartCoroutine(startAlgorithm());

    }

    public IEnumerator startAlgorithm() // Dijkstra's Algorithm
    {
        mapManager.tiles[mapManager.start].distance = 0;
        pq.buildHeap(mapManager.tiles);

        bool breakFlag = false; // function exits when either pq is empty or when finish has been found
        while (!breakFlag && !pq.isEmpty()){

            Vector3Int currentVert = pq.delMin();

            yield return new WaitForSeconds(0.003f);

            foreach (Vector3Int nextVert in mapManager.tiles[currentVert].neighbors){
                
                float newDist = mapManager.tiles[currentVert].distance + mapManager.tiles[currentVert].weight; // finding new distance

                if (newDist < mapManager.tiles[nextVert].distance){ // if new distance is less than old distance

                    map.SetTileFlags(nextVert,TileFlags.None); // turns color of tile blue
                    map.SetColor(nextVert, new Color(0, 0, 1, 1));
                    
                    mapManager.tiles[nextVert].distance = newDist;
                    mapManager.tiles[nextVert].pred = currentVert;
                    pq.decreaseKey(nextVert, mapManager.tiles[nextVert].distance); // resetting Priority Queue

                    if (nextVert == mapManager.finish){ // finish has been found, stop while loop

                        Debug.Log($"{mapManager.finish} | {nextVert}");

                        breakFlag = true;

                    } // if nextVert
                } // if newDist
            } // foreach
        } // while !pq.isEmpty
    } // startAlgorithm()
}

// PriorityQueue class used from ECE241 lectures converted to C#
public class PriorityQueue
{
    private List<(float, Vector3Int)> heapList = new List<(float, Vector3Int)>();
    private int currentSize = 0;

    public void buildHeap(Dictionary<Vector3Int,TileScript> dict) // builds heapList
    {
        currentSize = dict.Count;

        foreach (var item in dict){

            heapList.Add((item.Value.distance, item.Key));
        }
        int i = (int) currentSize / 2;

        while (i > 0){

            percDown(i);
            i = i - 1;
        }

    } // buildHeap()

    public void percDown(int i){ // mini sort 

        while (i*2 <= currentSize){
            
            int mc = minChild(i);
            
            if (heapList[i].Item1 > heapList[mc].Item1){
                var temp = heapList[i];
                heapList[i] = heapList[mc];
                heapList[mc] = temp;

            } // if statement

            i = mc;
            
        } // while statement

    } // percDown()

    public void percUp(int i){

        while ((int) i/2 > 0){

            if (heapList[i].Item1 < heapList[(int) i/2].Item1){

                var temp = heapList[(int) i/2];
                heapList[(int) i/2] = heapList[i];
                heapList[i] = temp;
            }// if statement
            i = i/2;
        }
    }

    public int minChild(int i){ // returns index of min child

        if (i*2 > currentSize){
            return -1;
        }
        else{
            if(i*2 + 1 > currentSize){

                return i*2;
            }
            else{
                if(heapList[i*2].Item1 < heapList[i*2 + 1].Item1){
                    return i*2;
                }
                else{
                    return i*2 + 1;
                }

            }

        }
    } // minChild()

    public Vector3Int delMin(){ // removes minChild Vector3Int

        var retval = heapList[1].Item2;
        heapList[1] = heapList[currentSize];
        currentSize = currentSize - 1;

        heapList.RemoveAt(0);
        percDown(1);

        return retval;
    } // delMin()

    public bool isEmpty(){ // returns true or false whether or not heapList is empty

        if (currentSize == 0){
            return true;
        }
        else{
            return false;
        }
    } // isEmpty()

    public void decreaseKey(Vector3Int val, float amt){ // changes key to its new updated amount

        bool done = false;
        int i = 1;
        int myKey = 0;
        while (!done && i <= currentSize){

           if (heapList[i].Item2 == val){

               done = true;
               myKey = i;
           }
           else{

               i += 1;
           } // if/else
        } // while statement
        if (myKey > 0){

            heapList[myKey] = (amt, heapList[myKey].Item2);
            percUp(myKey);
        } // if statement
        
    } // decreaseKey()

} // class PriorityQueue
