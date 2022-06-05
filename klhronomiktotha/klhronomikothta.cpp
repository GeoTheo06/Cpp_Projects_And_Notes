#include <iostream>
using namespace std;

//klhronomikothta

class Kinhto { //parent
public:
	int plhktra;
	bool portaki;
	string marka;
};

class KinhtoV2 : public Kinhto { //child //arxikopoihsh klashs ws synexeia ths Kinhto
public:
	bool kamera; //extra idiothta kinhtou

	KinhtoV2(int posaPlhktra, bool exeiPortaki, string tiMarka, bool exeiKamera) { //parathrhse pws xrhsimopoioume ton constructor sto paidi kai oxi sto main class
		plhktra = posaPlhktra;
		portaki = exeiPortaki;
		marka = tiMarka;
		kamera = exeiKamera;
	}
};

class KinhtoV3 : public KinhtoV2 { //grandChild //arxikopoihsh klashs ws synexeia ths KinhtoV2

};

//pantrema

class Pateras {
public:
	string onomaPatera;
	void minimaPatera() {
		cout << "xairethsmata apo Patera";
	}
};

class Mhtera {
public:
	string onomaMhtreas;
	void minimaMhteras() {
		cout << "xairethsmata apo thn Mhtera";
	}
};

class Egw : public Pateras, public Mhtera {

};

int main() {
	//klhronomikothta
	KinhtoV2 neoKinhto(14, true, "sony", true);
	neoKinhto.marka = "apple";

	//pantrema
	Egw giwrgos;
	giwrgos.onomaMhtreas = "mama";
	giwrgos.onomaPatera = "mpampas";
	giwrgos.minimaMhteras();
	giwrgos.minimaPatera();
	//dhladh syndeontas polla antikeimena se ena, mporoume na xrhsimopoihsoume to ena antikeimeno gia na exoume oles tis plhrofories se ena.
}