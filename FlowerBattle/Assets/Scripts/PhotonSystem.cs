using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PhotonSystem : Photon.MonoBehaviour {

	public Text who;

	/// マスターサーバーのロビーに入るに呼び出されます。
	void OnJoinedLobby() {
		Debug.Log("ロビーに入室");
		//ランダムにルームへ参加
		PhotonNetwork.JoinRandomRoom();
		who.text = "クライアント";
	}

	/// 部屋に入るとき呼ばれます。
	/// これは参加する際だけでなく作成する際も含みます。
	void OnJoinedRoom() {
		Debug.Log("部屋に入室");
	}

	/// JoinRandom()の入室が失敗した場合に後に呼び出されます。
	void OnPhotonRandomJoinFailed() {
		Debug.Log("部屋入室失敗");
		//名前のないルームを作成
		PhotonNetwork.CreateRoom(null);
		who.text = "マスター";
	}

	void Awake() {
		//マスターサーバーへ接続
		PhotonNetwork.ConnectUsingSettings("v0.1");
	}
}
