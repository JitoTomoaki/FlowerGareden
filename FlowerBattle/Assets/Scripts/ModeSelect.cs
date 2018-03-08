using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ModeSelect: MonoBehaviour {

	public GameObject SelectCanvas;
	public GameObject ParentCanvas;
	public GameObject ChildCanvas;

	void Start () {
		
	}

	void Update () {
		
	}

	public void ParentClick(){
		SelectCanvas.SetActive (false);
		ParentCanvas.SetActive (true);

	}

	public void ChildClick(){
		SelectCanvas.SetActive (false);
		ChildCanvas.SetActive (true);
	}
}
