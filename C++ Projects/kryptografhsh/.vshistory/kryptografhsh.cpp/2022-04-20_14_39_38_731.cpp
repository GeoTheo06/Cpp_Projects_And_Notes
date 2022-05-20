#include <string>
#include <iostream>
#include <ctime>
using namespace std;

void kryptografhsh() {
	srand(time(0));

	string text;
	cout << "Grapse to keimeno pou thes na kryptografhthei: ";
	cin.ignore();
	getline(cin, text);

	int textLength = text.length(); //apothikevw ton arithmo twn xarakthrwn pou exei to keimeno tou xrhsth sto "textLength"
	char* textChar = new char[textLength];

	textChar = &text[0]; //metatrepw to string "text" se char "textChar"

	int* textNum = new int[textLength]; //megethos tou keimenou tou xrhsth

	for (int i = 0; i < textLength; i++) { //arithmoi pou antistoixoun sto kathe gramma tou keimenou tou xrhsth
		textNum[i] = textChar[i];
	}

	int lexeis = 1;
	for (int i = 0; i < textLength; i++) {
		if (textNum[i] == 32) {
			lexeis += 1;
		}
	}

	char* privateKey = new char[lexeis];

	cout << "epelekse xarakthra kwdikopoihshs: "; //xarakthras o opoios tha kwdikopoihthei (prepei na perilamvanetai sto apotelesma)
	char privateKeyCharacter;
	cin >> privateKeyCharacter;

	for (int i = 0; i < lexeis; i++) { //bazw ton xarakthra (tou xrhsth) pou tha kwdikopoih8ei sto privateKey
		privateKey[i] = privateKeyCharacter;
	}

	int* numbersOfPrivateKey = new int[lexeis];
	for (int i = 0; i < lexeis; i++) { //arithmoi pou antistoixoun sto kathe gramma tou privateKey
		numbersOfPrivateKey[i] = privateKey[i];
	}

	cout << privateKeyCharacter << " ";

		//kanw random ta grammata tou privateKey kai apothikevw ton arithmo me ton opoio prostethikan sto "additionNumbers"
	int* additionNumbers = new int[lexeis];
	for (int i = 0; i < lexeis; i++) {
		additionNumbers[i] = (rand() % 90) + 1; //apo 1 ews 90
		numbersOfPrivateKey[i] += additionNumbers[i];
		if (numbersOfPrivateKey[i] > 126) {
			numbersOfPrivateKey[i] -= 94; //(to 94 bgainei apo to 126-32)
		}
		privateKey[i] = numbersOfPrivateKey[i];
		cout << privateKey[i];
	}
	cout << " ";

	char* kryptografhmenoKeimeno = new char[textLength];
	int w = 0;
	for (int i = 0; i < textLength; i++) {
		if (textNum[i] == 32) {
			w += 1;
			kryptografhmenoKeimeno[i] = 32;
		} else {
			textNum[i] += additionNumbers[w];
			if (textNum[i] > 126) {
				textNum[i] -= 94; //(to 94 bgainei apo to 126-32)
			}
			kryptografhmenoKeimeno[i] = textNum[i];
		}
	}

	for (int i = 0; i < textLength; i++) {
		cout << kryptografhmenoKeimeno[i];
	}

	cout << endl;
}

void apokryptografhsh() {
	string kryptografhmenoKeimeno;
	cout << "kane copy - paste to keimeno pou sou dothike: ";
	cin.ignore();
	getline(cin, kryptografhmenoKeimeno);

	int textLength = kryptografhmenoKeimeno.length();

	char* kryptografhmenoKeimenoChar = new char[textLength];
	kryptografhmenoKeimenoChar = &kryptografhmenoKeimeno[0];

	char xarakthrasKwdikopoihshs = kryptografhmenoKeimenoChar[0]; //pairnw ton prwto xarakthra apo to kwdikopoihmeno keimeno o opoios einai o xarakthras ths kryptografhshs.

	int theshDeuterouKenou = 0;
	for (int i = 2; i < textLength; i++) {
		if (kryptografhmenoKeimenoChar[i] == 32) { //briskw to deutero keno sto keimeno pou eisaxthike
			theshDeuterouKenou = i;
			break;
		}
	}
	char* pointers = new char[theshDeuterouKenou - 2];
	for (int i = 0; i < theshDeuterouKenou - 2; i++) {
		pointers[i] = kryptografhmenoKeimenoChar[i + 2]; //pairnw tous kryptografhmenous xarakthres oi opoioi deixnoun poso prostethike sthn kathe leksh.
	}

	//briskw tous arithmous pou prostethikan sthn kathe leksh
	int* additionNumbers = new int[theshDeuterouKenou - 2];
	for (int i = 0; i < theshDeuterouKenou - 2; i++) {
		if (pointers[i] > xarakthrasKwdikopoihshs) {
			additionNumbers[i] = pointers[i] - xarakthrasKwdikopoihshs; //an einai megalytero den exei meiwthei kata 94
		}
		if (pointers[i] < xarakthrasKwdikopoihshs) {
			additionNumbers[i] = pointers[i] + 94 - xarakthrasKwdikopoihshs; //an den einai megalytero shmainei oti exei meiwuei kata 94 kai prepei na to aukshsw
		}
	}

	//apokryptografw to keimeno
	int w = 0;
	char* apokryptografhmenoKeimeno = new char[textLength - (theshDeuterouKenou + 1)];
	int* apokryptografhmenoKeimenoInt = new int[textLength - (theshDeuterouKenou + 1)];
	int justTesting;
	int i2 = 0;
	for (int i = theshDeuterouKenou + 1; i < textLength; i++) {

		if (kryptografhmenoKeimenoChar[i] == 32) {
			w += 1;
			apokryptografhmenoKeimenoInt[i2] = 32;
		} else {
			if (kryptografhmenoKeimenoChar[i] > xarakthrasKwdikopoihshs) {
				apokryptografhmenoKeimenoInt[i2] = kryptografhmenoKeimenoChar[i] - additionNumbers[w]; //an einai megalytero den exei meiwthei kata 94
			}

			justTesting = kryptografhmenoKeimenoChar[i] - additionNumbers[w] + 94;
			if (kryptografhmenoKeimenoChar[i] < justTesting && kryptografhmenoKeimenoChar[i] > xarakthrasKwdikopoihshs && justTesting < 127 && justTesting > 32) {
				apokryptografhmenoKeimenoInt[i2] = justTesting;
			}

			if (kryptografhmenoKeimenoChar[i] <= xarakthrasKwdikopoihshs) {
				apokryptografhmenoKeimenoInt[i2] = kryptografhmenoKeimenoChar[i] - additionNumbers[w] + 94; //an den einai megalytero shmainei oti exei meiwuei kata 94 kai prepei na to aukshsw
				if (apokryptografhmenoKeimenoInt[i2] > 126) {
					apokryptografhmenoKeimenoInt[i2] = kryptografhmenoKeimenoChar[i] - additionNumbers[w];
				}
			}
		}
		apokryptografhmenoKeimeno[i2] = apokryptografhmenoKeimenoInt[i2];
		cout << apokryptografhmenoKeimeno[i2];
		i2 += 1;
	}
	cout << endl;
}

int main() {

	while (true) {
		cout << "1. kryptografhsh" << endl;
		cout << "2. apokryptografhsh" << endl;
		cout << "3. eksodos" << endl;
		int epilogh;
		cin >> epilogh;
		if (epilogh == 1) {
			kryptografhsh();
		}
		if (epilogh == 2) {
			apokryptografhsh();
		}
		if (epilogh == 3) {
			return 0;
		}
	}
}