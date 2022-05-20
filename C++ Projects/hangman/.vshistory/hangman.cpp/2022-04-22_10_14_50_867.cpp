#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

void monos1() {
	srand(time(0));
	string randomLeksh;
	int prospatheies = 6;
	char grammaXrhsth;
	ifstream periexomenoArxeiou("words.txt");
	int randomArithmos = (rand() % 300);

	for (int i = 0; i <= randomArithmos; i++) {
		getline(periexomenoArxeiou, randomLeksh); //pairnw thn random leksh apo to arxeio me tis 300 lekseis
	}
	int textLength = randomLeksh.length(); //arithmos grammatwn ths random lekshs

	char* randomLekshChar = new char[textLength];

	for (int i = 0; i < textLength; i++) {
		randomLekshChar[i] = randomLeksh[i]; //metatrepw th random leksh se char[]
	}


	cout << "Bres thn leksh, grafontas 1 xarakthra thn fora: " << endl;
	for (int i = 0; i < textLength; i++) {
		cout << "_ ";
	}

	cout << endl;
	if (prospatheies == 1) {
		cout << "sou apomenei " << prospatheies << " prospatheia" << endl;
	} else {
		cout << "sou apomenoun " << prospatheies << " prospatheies" << endl;
	}

	cin >> grammaXrhsth;

	for (int i = 0; i < textLength; i++) {
		if (grammaXrhsth == randomLekshChar[i]) {
			cout << "Swsto!";
		} else {
			cout << "lathos!";
		}
	}

	//cout << "lathos grammata: " << lathosGrammata[i];

}

void meFilo() {

}

int main() {
	cout << "                KREMALA" << endl;
	cout << "-------------------------------------------" << endl;

	while (true) {
		cout << "\"den exw filous\" epilogh (1)" << endl;
		cout << "paikse me filo (2)" << endl;
		int epilogh;
		cin >> epilogh;
		if (epilogh == 1) {
			int epiloghDyskolias;
			cout << "epelekse bathmo dyskolias: (1) easy | (2) medium | (3) hard | (4) impossible" << endl;
			cin >> epiloghDyskolias;
			if (epiloghDyskolias == 1) {
				monos1();
			} else if (epiloghDyskolias == 2) {
				monos1();
			} else if (epiloghDyskolias == 3) {
				monos1();
			} else if (epiloghDyskolias == 4) {
				monos1();
			} else {
				cout << "lathos epilogh";
			}
		} else if (epilogh == 2) {
			meFilo();
		} else {
			cout << "lathos epilogh!";
		}
	}
}