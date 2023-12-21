using UnityEngine;
using System.Collections;

/// <summary>
/// Spritesheet for Flappy Bird found here: http://www.spriters-resource.com/mobile_phone/flappybird/sheet/59537/
/// Audio for Flappy Bird found here: https://www.sounds-resource.com/mobile/flappybird/sound/5309/
/// </summary>
public class FlappyScript : MonoBehaviour
{

    public AudioClip FlyAudioClip, DeathAudioClip, ScoredAudioClip;
    public Sprite GetReadySprite;
    public float RotateUpSpeed = 1, RotateDownSpeed = 1;
    public GameObject IntroGUI, DeathGUI;
    public Collider2D restartButtonGameCollider;
    public float VelocityPerJump = 3;
    public float XSpeed = 1;

    public string portName = "COM7"; // Change to your Arduino port
    public int baudRate = 9600;

    private SerialHandler serialHandler;
    private bool doOnce = true;
    private bool doOnce2 = true;

    // Use this for initialization
    void Start()
    {
        serialHandler = new SerialHandler(portName, baudRate);
        serialHandler.OnDataReceived += OnDataReceived;
    }

    FlappyYAxisTravelState flappyYAxisTravelState;

    enum FlappyYAxisTravelState
    {
        GoingUp, GoingDown
    }

    Vector3 birdRotation = Vector3.zero;
    // Update is called once per frame
    void Update()
    {
        
        //handle back key in Windows Phone
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();

        if (GameStateManager.GameState == GameState.Intro)
        {
            MoveBirdOnXAxis();
            if (serialHandler.IsDataAvailable())
            {
                try
                {
                    string receivedData = serialHandler.ReadSerialData();
                    //Debug.Log("Received data from Arduino: " + receivedData);

                    if (receivedData == "1")
                    {
                        serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");

                        //Debug.Log("Flap!");
                        //Debug.Log("Clicked!");
                        BoostOnYAxis();
                        GameStateManager.GameState = GameState.Playing;
                        IntroGUI.SetActive(false);
                        ScoreManagerScript.Score = 0;
                    }
                }
                catch (System.Exception)
                {
                    //Debug.Log("Clicked!");
                    serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");

                    BoostOnYAxis();
                    GameStateManager.GameState = GameState.Playing;
                    IntroGUI.SetActive(false);
                    ScoreManagerScript.Score = 0;
                }   
            }
            else
            {
                //Debug.Log("No data available from Arduino.");
            }
            if (WasTouchedOrClicked())
            {
                BoostOnYAxis();
                GameStateManager.GameState = GameState.Playing;
                IntroGUI.SetActive(false);
                ScoreManagerScript.Score = 0;
            }
        }

        else if (GameStateManager.GameState == GameState.Playing)
        {
            if (doOnce2 == true)
            {
                serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");
                doOnce2 = false;
            }
            MoveBirdOnXAxis();
            doOnce = true;
            if (serialHandler.IsDataAvailable())
            {
                try
                {
                    string receivedData = serialHandler.ReadSerialData();
                    //Debug.Log("Received data from Arduino: " + receivedData);

                    if (receivedData == "1")
                    {
                        

                        //Debug.Log("Flap!");
                        BoostOnYAxis();
                    }
                }
                catch (System.Exception)
                {
                    BoostOnYAxis();
                }
            }
            else
            {
                //Debug.Log("No data available from Arduino.");
            }


            if (WasTouchedOrClicked())
            {
                BoostOnYAxis();
            }

        }

        else if (GameStateManager.GameState == GameState.Dead)
        {
            Vector2 contactPoint = Vector2.zero;
            doOnce2 = true;

            if (doOnce)
            {
                doOnce = false;
                serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");
            }


            if (Input.touchCount > 0)
                contactPoint = Input.touches[0].position;
            if (Input.GetMouseButtonDown(0))
                contactPoint = Input.mousePosition;

            //check if user wants to restart the game
            if (restartButtonGameCollider == Physics2D.OverlapPoint
                (Camera.main.ScreenToWorldPoint(contactPoint)))
            {
                GameStateManager.GameState = GameState.Intro;
                Application.LoadLevel(Application.loadedLevelName);
            }

            if (serialHandler.IsDataAvailable())
            {

                try
                {
                    string receivedData = serialHandler.ReadSerialData();
                    //Debug.Log("Received data from Arduino: " + receivedData);

                    if (receivedData == "1")
                    {

                        //Debug.Log("Flap!");
                        GameStateManager.GameState = GameState.Intro;
                        Application.LoadLevel(Application.loadedLevelName);
                    }
                }
                catch (System.Exception)
                {
                    //Debug.Log("Clicked!");
                    GameStateManager.GameState = GameState.Intro;
                    Application.LoadLevel(Application.loadedLevelName);
                }
            }
        }

    }

    private void OnDataReceived(string message)
    {
        // Handle data received from Arduino if needed
    }


    void FixedUpdate()
    {
        //just jump up and down on intro screen
        if (GameStateManager.GameState == GameState.Intro)
        {
            if (GetComponent<Rigidbody2D>().velocity.y < -1) //when the speed drops, give a boost
                GetComponent<Rigidbody2D>().AddForce(new Vector2(0, GetComponent<Rigidbody2D>().mass * 5500 * Time.deltaTime)); //lots of play and stop 
                                                        //and play and stop etc to find this value, feel free to modify
        }
        else if (GameStateManager.GameState == GameState.Playing || GameStateManager.GameState == GameState.Dead)
        {
            FixFlappyRotation();
        }
    }

    bool WasTouchedOrClicked()
    {
        if (Input.GetButtonUp("Jump") || Input.GetMouseButtonDown(0) || 
            (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended))
            return true;
        else
            return false;
    }

    void MoveBirdOnXAxis()
    {
        transform.position += new Vector3(Time.deltaTime * XSpeed, 0, 0);
    }

    void BoostOnYAxis()
    {
        GetComponent<Rigidbody2D>().velocity = new Vector2(0, VelocityPerJump);
        GetComponent<AudioSource>().PlayOneShot(FlyAudioClip);
    }



    /// <summary>
    /// when the flappy goes up, it'll rotate up to 45 degrees. when it falls, rotation will be -90 degrees min
    /// </summary>
    private void FixFlappyRotation()
    {
        if (GetComponent<Rigidbody2D>().velocity.y > 0) flappyYAxisTravelState = FlappyYAxisTravelState.GoingUp;
        else flappyYAxisTravelState = FlappyYAxisTravelState.GoingDown;

        float degreesToAdd = 0;

        switch (flappyYAxisTravelState)
        {
            case FlappyYAxisTravelState.GoingUp:
                degreesToAdd = 6 * RotateUpSpeed;
                break;
            case FlappyYAxisTravelState.GoingDown:
                degreesToAdd = -3 * RotateDownSpeed;
                break;
            default:
                break;
        }
        //solution with negative eulerAngles found here: http://answers.unity3d.com/questions/445191/negative-eular-angles.html

        //clamp the values so that -90<rotation<45 *always*
        birdRotation = new Vector3(0, 0, Mathf.Clamp(birdRotation.z + degreesToAdd, -90, 45));
        transform.eulerAngles = birdRotation;
    }

    /// <summary>
    /// check for collision with pipes
    /// </summary>
    /// <param name="col"></param>
    void OnTriggerEnter2D(Collider2D col)
    {
        if (GameStateManager.GameState == GameState.Playing)
        {
            if (col.gameObject.tag == "Pipeblank") //pipeblank is an empty gameobject with a collider between the two pipes
            {
                GetComponent<AudioSource>().PlayOneShot(ScoredAudioClip);
                ScoreManagerScript.Score++;
            }
            else if (col.gameObject.tag == "Pipe")
            {
                FlappyDies();
            }
        }
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if (GameStateManager.GameState == GameState.Playing)
        {
            if (col.gameObject.tag == "Floor")
            {
                FlappyDies();
            }
        }
    }

    void FlappyDies()
    {
        GameStateManager.GameState = GameState.Dead;
        DeathGUI.SetActive(true);
        GetComponent<AudioSource>().PlayOneShot(DeathAudioClip);
    }

}
