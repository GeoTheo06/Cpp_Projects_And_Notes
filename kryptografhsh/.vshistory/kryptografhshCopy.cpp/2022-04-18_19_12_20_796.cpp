#include <string>
#include <iostream>
using namespace std;

int main() {

	srand(time(0));

	string text;
	cout << "Grapse to keimeno pou thes na kryptografhthei: ";
	getline(cin, text);

	int textLength = text.length(); //apothikevw ton arithmo twn xarakthrwn pou exei to keimeno tou xrhsth sto "textLength"
	char* textChar = new char[textLength];

	for (int i = 0; i < textLength; i++) {
		textChar = &text[i]; //metatrepw to string "text" se char "textChar"
	}

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

	cout << "epelekse xarakthra kwdikopoihshs: "; //xarakthras o opoios tha kwdikopoihthei (prepei na perilambanetai sto apotelesma)
	char privateKeyCharacter;
	cin >> privateKeyCharacter;

	for (int i = 0; i < lexeis; i++) { //bazw ton xarakthra (tou xrhsth) pou tha kwdikopoih8ei sto privateKey
		privateKey[i] = privateKeyCharacter;
	}

	int* numbersOfPrivateKey = new int[lexeis];
	for (int i = 0; i < lexeis; i++) { //arithmoi pou antistoixoun sto kathe gramma tou privateKey
		numbersOfPrivateKey[i] = privateKey[i];
	}

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
}