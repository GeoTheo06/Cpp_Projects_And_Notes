//comment the f-ing code dumbassss
#include <windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

int pontoi = 0;

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
			cout << "adunato epipedo, pairneis 20 pontous kai nikas automata";
			pontoi += 20;
		}
	} else {
		pontoi--;
	}

	if (pontoi < 0) {
		pontoi = 0;
	}

	if (pontoi >= 20) {
		cout << "TO PAIXNIDI TELEIWSE KAI NIKHSES! SYGXARHTIRIA!";
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

void nikh2() {

}

void monos1(int arithmosProspatheiwn, int pontoiPouKerdise) {
	srand(time(0));
	string randomLeksh;
	int prospatheies = arithmosProspatheiwn;
	ifstream periexomenoArxeiou("words.txt");
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
	nikh1(0);
}

void meFilo() {
	cout << "posoi paiktes paizoun; ";
	int arithmosPaiktwn;
	cin >> arithmosPaiktwn;

	cout << "stous posous pontous thelete na teleiwnei to paixnidi; ";
	int pontoiMeFilous;
	cin >> pontoiMeFilous;

	cout << "poses prospathries thelete na exei o kathe paikths; (to synithismeno einai 6)";
	int prospatheies = 0;
	cin >> prospatheies;

	cout << "paiktes: ";
	int* paiktes = new int[arithmosPaiktwn + 1] {};

	int paiktesCounter = 0;
	for (int i = 0; i <= arithmosPaiktwn; i++) {
		paiktesCounter += 1;
		paiktes[i] = paiktesCounter;
		cout << paiktes[i];
		if (arithmosPaiktwn - 2 > i) {
			cout << ", ";
		}
	}
	int seiraPaikth = 0;
	while (pontoi != pontoiMeFilous) {
		cout << "paizei o " << seiraPaikth << " paikths. Grapse mia duskolh leksh wste na mhn mporei eukola na th vrei o antipalos sou: ";
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
	}
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
		meFilo();
	} else {
		cout << "lathos epilogh!";
	}
}