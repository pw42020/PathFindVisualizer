using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;

public class InteractTiles : MonoBehaviour
{
    // declaring all booleans necessary to check for
    public bool isStart;
    public bool isFinish;
    public bool isDefense;
    public bool isFound;
    public float weight = 1;

    public List<Collider2D> colliders = new List<Collider2D>();

    private BoxCollider2D boxCollider2d;
    private RaycastHit2D raycastHit2D;

    private void Awake() {
        boxCollider2d = transform.GetComponent<BoxCollider2D>();
    }

    void Start()
    {
        hasConnection();
    }

    void Update()
    {
        
    }

    void hasConnection() {

        // gets all physics objects in circle including starting Tile
        Collider2D[] connections = Physics2D.OverlapCircleAll(boxCollider2d.bounds.center, boxCollider2d.bounds.extents.y*1.3f);
        List<string> names = new List<string>();

        for (int i = 1; i < connections.Length; i++){

                if (connections[i].name != "Start" && connections[i].name != this.name){

                    colliders.Add(connections[i]);  // creating new colliders Collider2D[], adding all connections after starting Tile
                    
                }

                names.Add(connections[i].name);

                // if Start is in container of Tile
                if(names.Contains("Start")){
                    
                    isStart = true;
                    GetComponent<SpriteRenderer>().color = new Color(1, 0, 0, 1);
                }

                else{
                    
                    isStart = false;
                    GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);
                }
        }
    }
}
