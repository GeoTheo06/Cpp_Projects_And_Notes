#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

void monos1() {
	string randomLeksh;
	int prospatheies = 6;
	char grammaXrhsth;
	ifstream periexomenoArxeiou("words.txt");
	int randomArithmos = (rand() % 300);

	for (int i = 0; i <= randomArithmos; i++) {
		getline(periexomenoArxeiou, randomLeksh);
	}
	int textLength = randomLeksh.length();

	char* randomLekshChar = new char[textLength];

	for (int i = 0; i < textLength; i++) {
		randomLekshChar[i] = randomLeksh[i];
	}

	for (int i = 0; i < textLength; i++) {
		cout << randomLekshChar[i];
	}


	cout << "Bres thn leksh, grafontas 1 xarakthra thn fora: " << endl;
	for (int i = 0; i < textLength; i++) {
		cout << "_";
	}

	if (prospatheies == 1) {
		cout << "sou apomenei " << prospatheies << " prospatheia";
	} else {
		cout << "sou apomenoun " << prospatheies << " prospatheies";
	}

	cin >> grammaXrhsth;

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