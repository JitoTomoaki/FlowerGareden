using System.Collections;
//using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//今日はもう帰りたいよ
public class mainProcess : Photon.MonoBehaviour {

	//変数の宣言
	public PhotonView test;	//このtestを通してデータを共有
	public Text text;	//id表示用のテキスト
	public Text CountText; //カウントダウンテキストの表示
    public GameObject endCanvas;    //終了エフェクト用のテキストのあるキャンバス
    public Text endText;
	public GameObject[] Flowers;	//生成用の花の配列（inspectorのところで定義）
	public GameObject startButton;
	public GameObject resetButton;

	float posx = 0;
	float posy = 0;
	int flowerId = 0;	//ランダムで選ぶ花のid
	bool FlowerTrigger = true;
	float cline = 0;
	int id;
	bool StartFlag =false;
	int[] createCount = new int[2];	//createCount[0]がplayerA,[1]がplayerB
    string winner = ""; //勝者判定用（A or Bを代入する）

	//定数の宣言
	const int A = 0;
	const int B = 1;
	const int playerA = 2;
	const int playerB = 3;
	const int limit = 10;
	const int zero = 0;

	// Use this for initialization
	void Start () {
		createCount [A] = 0;
		createCount [B] = 0;
	}

	// Update is called once per frame
	void Update () {
		id = PhotonNetwork.player.ID;	//←ほんとはいけんけどな
		//text.text = "接続番号"+id.ToString ();
		accelNotice ();
	}


	//加速度検知を行う関数
	private void accelNotice(){
		if (StartFlag) {
			cline = Input.acceleration.y;
			text.text = cline.ToString ();
			if (cline > 0.5f) {
				if (FlowerTrigger == true) {
					test.RPC ("create", PhotonTargets.MasterClient, id);
				}
				FlowerTrigger = false;
			}
			if (cline < -0.5f) {
				FlowerTrigger = true;
			}
		}
	}

	//子機によって呼び出される花を生成する処理
	[PunRPC]
	private void create(int id){
		flowerId = Random.Range (0, Flowers.Length);
		GameObject createdFlower = Instantiate (Flowers[flowerId]);
		posx = Random.Range (-7.0f, -1.0f);
		posy = Random.Range (-4.0f, 5.0f);
		if (id == playerA) {
			createCount [A]++;	//playerAの花作成数をカウント
		}
		if (id == playerB) {
			createCount [B]++;	//playerBの花作成数をカウント
			posx = posx*(-1);
		}
		createdFlower.transform.position = new Vector3 (posx, posy, 0);
		createdFlower.name = "Flower";	//名前をFlowerに統一

		if (createCount [A] >= limit || createCount [B] >= limit) { //ゲーム終了
			test.RPC ("finish", PhotonTargets.All); //生成をストップ
            if(createCount[A] >= limit){    //勝者の判定
                winner = "A";
            }else if(createCount[B] >= limit){
                winner = "B";
            }

            endCanvas.SetActive(true);
            endText.text = "終了!" + winner + "の勝ち！";
            createCount[A] = zero;  //カウントのリセット
            createCount[B] = zero;
			resetButton.SetActive(true);    //リセットボタンを表示
		}
	}

	[PunRPC]
	private void start(){
		StartFlag = true;
	}

	[PunRPC]
	private void finish(){
		StartFlag = false;
	}

	public void startClick(){
		StartCoroutine ("countdown"); //コルーチンの開始
		//startButton.SetActive (false);	//ボタンを非表示
		resetButton.SetActive (false);

	}

	public void resetClick(){
		GameObject[] targets = GameObject.FindGameObjectsWithTag ("Flower");	//Flowerタグのついたオブジェクトをターゲットにする
		foreach (GameObject target in targets) {
			Destroy(target);
		}
		startButton.SetActive(true);	//リセットしたらスタートボタンだけ表示
		resetButton.SetActive(false);
	}

    //スタートを押した時のカウントダウンの処理
	private IEnumerator countdown(){
		CountText.text = "3";
		yield return new WaitForSeconds (1.0f);
		CountText.text = "2";
		yield return new WaitForSeconds (1.0f);
		CountText.text = "1";
		yield return new WaitForSeconds (1.0f);
		CountText.text = "Start";
		test.RPC ("start", PhotonTargets.All);
		yield return new WaitForSeconds (1.0f);
		startButton.SetActive (false);	//ボタンを非表示

		
	}
}
