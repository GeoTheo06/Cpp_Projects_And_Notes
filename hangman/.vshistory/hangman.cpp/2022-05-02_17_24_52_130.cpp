//comment the f-ing code
#include <windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

int pontoi = 0;
int pontoiPaiktwn[100] = {};
int seiraPaikth1 = 0;

void nikh1(int vathmoiDyskolias) {
	if (vathmoiDyskolias != 0) {
		cout << endl << endl << "Bravo! Vrhkes th leksh!" << endl << "Epeidh oloklhrwses to ";
		if (vathmoiDyskolias == 1) {
			cout << "eukolo epipedo, pairneis 1 ponto";
			pontoi++;
		} else if (vathmoiDyskolias == 2) {
			cout << "mesaio epipedo, pairneis 2 pontous";
			pontoi += 2;
		} else if (vathmoiDyskolias == 3) {
			cout << "dyskolo epipedo, pairneis 3 pontous";
			pontoi += 3;
		} else if (vathmoiDyskolias == 20) {
			cout << "adunato epipedo, pairneis 20 pontous kai nikas automata...";
			system("timeout 2 > nul");
			pontoi += 20;
		}
	} else {
		pontoi--;
	}

	if (pontoi < 0) {
		pontoi = 0;
	}

	if (pontoi >= 20) {
		cout << endl << "TO PAIXNIDI TELEIWSE KAI NIKHSES! SYGXARHTIRIA!";
		exit(0);
	} else {
		cout << endl << "Exeis " << pontoi;
		if (pontoi == 1) {
			cout << " ponto";
		} else {
			cout << " pontous";
		}
		cout << " apo tous 20" << endl;
	}
	cout << endl << endl << endl << endl;
}

void nikh2(bool nikh, int arithmosPaiktwn, int seiraPaikth, int pontoiLekshs, int pontoiMeFilous) {


	if (nikh) {
		cout << "Bravo! Brhkate th leksh tou paikth " << seiraPaikth << "." << endl << "Pairnete " << pontoiLekshs << " pontous!" << endl;
		for (int i = 0; i < arithmosPaiktwn; i++) {

			if (i == seiraPaikth - 1) {

			} else {
				pontoiPaiktwn[i] += pontoiLekshs;
			}
		}

	} else {
		cout << "Den brhkate th leksh tou paikth " << seiraPaikth << "." << endl << "Xanete " << pontoiLekshs << " pontous!" << endl;
		for (int i = 0; i < arithmosPaiktwn; i++) {

			if (i == seiraPaikth - 1) {

			} else {
				pontoiPaiktwn[i] -= pontoiLekshs;

				if (pontoiPaiktwn[i] < 0) {
					pontoiPaiktwn[i] = 0;
				}
			}
		}
	}
}

void monos1(int arithmosProspatheiwn, int pontoiPouKerdise) {
	srand(time(0));
	string randomLeksh;
	int prospatheies = arithmosProspatheiwn;
	ifstream periexomenoArxeiou("words.txt");

	string tempLeksh;
	char* tempLekshChar = new char[300];
	for (int i = 0; i < 300; i++) {
		getline(periexomenoArxeiou, tempLeksh);
		int length = tempLeksh.length();
		for (int i = 0; i < length; i++) {
			tempLekshChar[i] = tempLeksh[i];
			tempLekshChar[i] += 5;
		}
		tempLeksh = tempLekshChar;
		cout << tempLeksh;
	}

	int randomArithmos = (rand() % 300);
	int lathosGrammataCounter = 0;

	for (int i = 0; i <= randomArithmos; i++) {
		getline(periexomenoArxeiou, randomLeksh); //pairnw thn random leksh apo to arxeio me tis 300 lekseis
	}

	int textLength = randomLeksh.length(); //arithmos grammatwn ths random lekshs

	char* randomLekshChar = new char[textLength];
	char lathosGrammataXrhsth[24] {};

	for (int i = 0; i < textLength; i++) {
		randomLekshChar[i] = randomLeksh[i]; //metatrepw th random leksh se char[]
	}

	char* lekshPouThaTypwthei = new char[textLength];
	lekshPouThaTypwthei[0] = randomLekshChar[0];
	randomLekshChar[0] = '~'; //auto to kanw se periptwsh pou o xrhsths eisagei enan xarakthra o opoios einai idios me auton tou prwtou grammatos ths tyxaias lekshs tha bgazei oti to petyxe swsta. Opote, egw metatrepw ton prwto xarakthra se enan xarakthhra ton opoio den tha eisagei gia na mhn yparxei problhma

	cout << "Bres thn leksh, grafontas 1 xarakthra thn fora: " << endl;
	for (int i = 1; i < textLength; i++) {
		lekshPouThaTypwthei[i] = '_';
	}

	for (int i = 0; i < textLength; i++) {
		cout << lekshPouThaTypwthei[i];
	}
	cout << endl;

	while (prospatheies != 0) {

		cout << "Epelekse xarakthra: ";
		string keimenoXrhsth;
		cin >> keimenoXrhsth;
		char grammaXrhsth = keimenoXrhsth[0];

		bool grammaCheck = false;
		for (int i = 0; i < textLength; i++) {
			if (grammaXrhsth == randomLekshChar[i]) {
				lekshPouThaTypwthei[i] = grammaXrhsth;
				grammaCheck = true;
			}
		}
		bool checkDoubleWrongInput = false;
		for (int i = 0; i < lathosGrammataCounter; i++) {
			if (grammaXrhsth == lathosGrammataXrhsth[i]) {
				checkDoubleWrongInput = true;
			}
		}

		if (grammaCheck) {
			cout << "Swsto!" << endl;
		} else if (checkDoubleWrongInput == true) {
			cout << "Exeis ksanaprospathisei auto to gramma kai einai lathos, dokimase kapoio allo" << endl;
		} else {
			cout << "Lathos!" << endl;
			lathosGrammataXrhsth[lathosGrammataCounter] = grammaXrhsth;
			lathosGrammataCounter++;
			prospatheies--;
		}
		system("timeout 2 > nul");

		cout << endl;
		for (int i = 0; i < textLength; i++) {
			cout << lekshPouThaTypwthei[i];
		}
		cout << endl;
		cout << "lathos grammata: ";
		for (int i = 0; i < lathosGrammataCounter; i++) {
			cout << lathosGrammataXrhsth[i];
			if (lathosGrammataCounter - 2 >= i) {
				cout << ", ";
			}
		}
		cout << endl;

		bool isothta = (randomLeksh == lekshPouThaTypwthei);

		if (isothta == true) {
			nikh1(pontoiPouKerdise);
			delete[] randomLekshChar;
			delete[] lekshPouThaTypwthei;
			return;
		}

		if (prospatheies == 1) {
			cout << "sou apomenei " << prospatheies << " prospatheia" << endl;
		} else if (prospatheies == 0) {
			cout << "Exases! H leksh htan \"" << randomLeksh << "\"" << endl;
		} else {
			cout << "sou apomenoun " << prospatheies << " prospatheies" << endl;
		}
	}
	delete[] randomLekshChar;
	delete[] lekshPouThaTypwthei;
	nikh1(0);
}

void monos2(int arithmosProspatheiwn, int pontoiPouKerdise) {
	srand(time(0));
	string randomLeksh;
	int prospatheies = arithmosProspatheiwn;
	ifstream periexomenoArxeiou("difficult_words.txt");
	int randomArithmos = (rand() % 253);
	int lathosGrammataCounter = 0;

	for (int i = 0; i <= randomArithmos; i++) {
		getline(periexomenoArxeiou, randomLeksh); //pairnw thn random leksh apo to arxeio me tis 253 lekseis
	}
	int textLength = randomLeksh.length(); //arithmos grammatwn ths random lekshs

	char* randomLekshChar = new char[textLength];
	char lathosGrammataXrhsth[24] {};

	for (int i = 0; i < textLength; i++) {
		randomLekshChar[i] = randomLeksh[i]; //metatrepw th random leksh se char[]
	}

	char* lekshPouThaTypwthei = new char[textLength];
	lekshPouThaTypwthei[0] = randomLekshChar[0];
	randomLekshChar[0] = '~'; //auto to kanw se periptwsh pou o xrhsths eisagei enan xarakthra o opoios einai idios me auton tou prwtou grammatos ths tyxaias lekshs tha bgazei oti to petyxe swsta. Opote, egw metatrepw ton prwto xarakthra se enan xarakthhra ton opoio den tha eisagei gia na mhn yparxei problhma

	cout << "Bres thn leksh, grafontas 1 xarakthra thn fora: " << endl;
	for (int i = 1; i < textLength; i++) {
		lekshPouThaTypwthei[i] = '_';
	}

	for (int i = 0; i < textLength; i++) {
		cout << lekshPouThaTypwthei[i];
	}
	cout << endl;

	while (prospatheies != 0) {
		cout << "Epelekse xarakthra: ";
		string keimenoXrhsth;
		cin >> keimenoXrhsth;
		char grammaXrhsth = keimenoXrhsth[0];

		bool grammaCheck = false;
		for (int i = 0; i < textLength; i++) {
			if (grammaXrhsth == randomLekshChar[i]) {
				lekshPouThaTypwthei[i] = grammaXrhsth;
				grammaCheck = true;
			}
		}
		bool checkDoubleWrongInput = false;
		for (int i = 0; i < lathosGrammataCounter; i++) {
			if (grammaXrhsth == lathosGrammataXrhsth[i]) {
				checkDoubleWrongInput = true;
			}
		}

		if (grammaCheck) {
			cout << "Swsto!" << endl;
		} else if (checkDoubleWrongInput == true) {
			cout << "Exeis ksanaprospathisei auto to gramma kai einai lathos, dokimase kapoio allo" << endl;
		} else {
			cout << "Lathos!" << endl;
			lathosGrammataXrhsth[lathosGrammataCounter] = grammaXrhsth;
			lathosGrammataCounter++;
			prospatheies--;
		}
		system("timeout 2 > nul");

		cout << endl;
		for (int i = 0; i < textLength; i++) {
			cout << lekshPouThaTypwthei[i];
		}
		cout << endl;
		cout << "lathos grammata: ";
		for (int i = 0; i < lathosGrammataCounter; i++) {
			cout << lathosGrammataXrhsth[i];
			if (lathosGrammataCounter - 2 >= i) {
				cout << ", ";
			}
		}
		cout << endl;

		bool isothta = (randomLeksh == lekshPouThaTypwthei);

		if (isothta == true) {
			nikh1(pontoiPouKerdise);
			delete[] randomLekshChar;
			delete[] lekshPouThaTypwthei;
			return;
		}

		if (prospatheies == 1) {
			cout << "sou apomenei " << prospatheies << " prospatheia" << endl;
		} else if (prospatheies == 0) {
			cout << "Exases! H leksh htan \"" << randomLeksh << "\"" << endl;
		} else {
			cout << "sou apomenoun " << prospatheies << " prospatheies" << endl;
		}
	}
	delete[] randomLekshChar;
	delete[] lekshPouThaTypwthei;
	nikh1(0);
}

void meFilo(int arithmosPaiktwn, int pontoiMeFilous, int pontoiSwsthsLekshs, int pontoiLathosLekshs, int prospatheies) {
	cout << "paiktes (p) kai vathmoi (v): " << endl;
	int* paiktes = new int[arithmosPaiktwn + 1] {};
	int paiktesCounter = 0;
	for (int i = 0; i < arithmosPaiktwn; i++) {
		paiktesCounter += 1;
		paiktes[i] = paiktesCounter;
		cout << "p: " << paiktes[i];
		cout << " v: " << pontoiPaiktwn[i];
		if (arithmosPaiktwn - 1 > i) {
			cout << ", " << endl;
		}
	}

	for (int i = 0; i < arithmosPaiktwn; i++) {
		if (pontoiPaiktwn[i] >= pontoiMeFilous) {
			cout << endl << "Sygxarhtiria! Nikhse o paikths " << i + 1;
			exit(0);
		}
	}

	seiraPaikth1 += 1;
	if (seiraPaikth1 > arithmosPaiktwn) {
		seiraPaikth1 = 1;
	}

	cout << endl << endl << "Paizei o paikths " << seiraPaikth1 << ". Grapse mia duskolh leksh";
	if (arithmosPaiktwn > 2) {
		cout << " wste na mhn mporoun na th vroun eukola oi antipaloi sou: ";
	} else if (arithmosPaiktwn == 2) {
		cout << " wste na mhn mporei na th vrei eukola o antipalos sou: ";
	}
	string lekshXrhsth = "";
	char ch;

	ch = _getch();
	while (ch = _getch()) {
		if (ch == 13) {
			break;
		} else if (ch == 8) {
			if (lekshXrhsth.length() > 0) {
				cout << "\b \b";
				lekshXrhsth.erase(lekshXrhsth.length() - 1);
			}
		} else {
			cout << "*";
			lekshXrhsth += ch;
		}
	}
	cout << endl;

	int textLength = lekshXrhsth.length();
	char* randomLekshChar = new char[textLength];
	string randomLeksh = lekshXrhsth;
	int lathosGrammataCounter = 0;
	char* lathosGrammataXrhsth = new char[prospatheies + 1];

	for (int i = 0; i < textLength; i++) {
		randomLekshChar[i] = randomLeksh[i]; //metatrepw th random leksh se char[]
	}

	char* lekshPouThaTypwthei = new char[textLength];
	lekshPouThaTypwthei[0] = randomLekshChar[0];
	randomLekshChar[0] = '~';

	if (arithmosPaiktwn == 2) {
		cout << "Bres th leksh, grafontas 1 xarakthra thn fora: " << endl;
	} else {
		cout << "Breite th leksh, grafontas 1 xarakthra thn fora: " << endl;
	}

	for (int i = 1; i < textLength; i++) {
		lekshPouThaTypwthei[i] = '_';
	}

	for (int i = 0; i < textLength; i++) {
		cout << lekshPouThaTypwthei[i];
	}
	cout << endl;

	while (prospatheies != 0) {
		if (arithmosPaiktwn == 2) {
			cout << "Epelekse xarakthra: ";
		} else {
			cout << "Epilekste xarakthra: ";
		}

		string keimenoXrhsth;
		cin >> keimenoXrhsth;
		char grammaXrhsth = keimenoXrhsth[0];

		bool grammaCheck = false;
		for (int i = 0; i < textLength; i++) {
			if (grammaXrhsth == randomLekshChar[i]) {
				lekshPouThaTypwthei[i] = grammaXrhsth;
				grammaCheck = true;
			}
		}
		bool checkDoubleWrongInput = false;
		for (int i = 0; i < lathosGrammataCounter; i++) {
			if (grammaXrhsth == lathosGrammataXrhsth[i]) {
				checkDoubleWrongInput = true;
			}
		}

		if (grammaCheck) {
			cout << "Swsto!" << endl;
		} else if (checkDoubleWrongInput == true) {
			if (arithmosPaiktwn == 2) {
				cout << "Exeis ksanaprospathisei auto to gramma kai einai lathos, dokimase kapoio allo" << endl;
			} else {
				cout << "Exete ksanaprospathisei auto to gramma kai einai lathos, dokimaste kapoio allo" << endl;
			}

		} else {
			cout << "Lathos!" << endl;
			lathosGrammataXrhsth[lathosGrammataCounter] = grammaXrhsth;
			lathosGrammataCounter++;
			prospatheies--;
		}
		system("timeout 2 > nul");

		cout << endl;
		for (int i = 0; i < textLength; i++) {
			cout << lekshPouThaTypwthei[i];
		}
		cout << endl;
		cout << "lathos grammata: ";
		for (int i = 0; i < lathosGrammataCounter; i++) {
			cout << lathosGrammataXrhsth[i];
			if (lathosGrammataCounter - 2 >= i) {
				cout << ", ";
			}
		}
		cout << endl;

		bool isothta = (randomLeksh == lekshPouThaTypwthei);

		if (isothta == true) {
			nikh2(true, arithmosPaiktwn, seiraPaikth1, pontoiSwsthsLekshs, pontoiMeFilous);
			delete[] paiktes;
			delete[] randomLekshChar;
			delete[] lathosGrammataXrhsth;
			delete[] lekshPouThaTypwthei;
			return;
		}

		if (prospatheies == 1) {
			if (arithmosPaiktwn == 2) {
				cout << "sou apomenei " << prospatheies << " prospatheia" << endl;
			} else {
				cout << "sas apomenei " << prospatheies << " prospatheia" << endl;
			}

		} else if (prospatheies == 0) {
			if (arithmosPaiktwn == 2) {
				cout << "Exases! H leksh htan \"" << randomLeksh << "\"" << endl;
			} else {
				cout << "Xasate! H leksh htan \"" << randomLeksh << "\"" << endl;
			}

		} else {
			if (arithmosPaiktwn == 2) {
				cout << "sou apomenoun " << prospatheies << " prospatheies" << endl;
			} else {
				cout << "sas apomenoun " << prospatheies << " prospatheies" << endl;
			}
		}
	}
	delete[] paiktes;
	delete[] randomLekshChar;
	delete[] lathosGrammataXrhsth;
	delete[] lekshPouThaTypwthei;
	nikh2(false, arithmosPaiktwn, seiraPaikth1, pontoiLathosLekshs, pontoiMeFilous);
}

int main() {
	cout << "                KREMALA" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "\"den exw filous\" (1)" << endl;
	cout << "paikse me filo (2)" << endl;
	int epilogh;
	cin >> epilogh;
	if (epilogh == 1) {
		cout << "Nikas stous 20 pontous. " << endl << "Apo to eykolo epipedo pairneis 1 ponto, apo to mesaio epipedo pairneis 2 pontous, apo to dyskolo epipedo pairneis 3 pontous. Nikontas to adynato epipedo pairneis 20 pontous kai nikas automatws. An xaseis se opoiodhpote epipedo, xaneis 1 ponto." << endl;
		while (true) {
			int epiloghDyskolias;
			cout << endl << "Epelekse vathmo dyskolias: (1) eukolo | (2) mesaio | (3) dyskolo | (4) adunato" << endl;
			cin >> epiloghDyskolias;
			if (epiloghDyskolias == 1) {
				monos1(9, 1);
			} else if (epiloghDyskolias == 2) {
				monos1(6, 2);
			} else if (epiloghDyskolias == 3) {
				monos2(4, 3);
			} else if (epiloghDyskolias == 4) {
				monos2(2, 20);
			} else {
				cout << "lathos epilogh";
			}
		}
	} else if (epilogh == 2) {
		cout << "posoi paiktes paizoun; ";
		int arithmosPaiktwn;
		cin >> arithmosPaiktwn;

		if (arithmosPaiktwn < 2 || arithmosPaiktwn > 100) {
			cout << "Parakalw eisagete enan egkyro arithmo";
			exit(0);
		}

		cout << "stous posous pontous thelete na teleiwnei to paixnidi; ";
		int pontoiMeFilous;
		cin >> pontoiMeFilous;

		cout << "posous pontous thelete na pairnete gia thn kathe swsth leksh; ";
		int pontoiSwsthsLekshs;
		cin >> pontoiSwsthsLekshs;

		cout << "posous pontous thelete na xanete gia thn kathe lathos leksh; ";
		int pontoiLathosLekshs;
		cin >> pontoiLathosLekshs;

		cout << "poses prospathies thelete na exei o kathe paikths; (to synithismeno einai 6)";
		int prospatheies = 0;
		cin >> prospatheies;

		for (int i = 0; i < 100; i++) {
			pontoiPaiktwn[i] = 0;
		}

		cout << endl;
		while (true) {
			meFilo(arithmosPaiktwn, pontoiMeFilous, pontoiSwsthsLekshs, pontoiLathosLekshs, prospatheies);
		}
	} else {
		cout << "lathos epilogh!";
	}
}