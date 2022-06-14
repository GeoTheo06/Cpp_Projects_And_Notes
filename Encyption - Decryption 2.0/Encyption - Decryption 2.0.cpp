#include <iostream>
#include <ctime>
using namespace std;
//apo to ena gramma tou xrhsth esy bgazeis alla 4. Prepei na vreis tropo na vriskei h apokryptografhsh  afto to gramma xrhsimopoiontas ta 4

string privateKey =

void encryption() {
	cout << "Please enter text to be encrypted: ";
	string userText;
	cin >> userText;
}

void decryption() {

}

int main() {
	while (true) {
		cout << "1. Encrypt" << endl;
		cout << "2. Decrypt" << endl;
		cout << "3. Exit" << endl;
		int choice;
		cin >> choice;
		if (choice == 1) {
			encryption();
		}
		if (choice == 2) {
			decryption();
		}
		if (choice == 3) {
			return 0;
		}
	}
}