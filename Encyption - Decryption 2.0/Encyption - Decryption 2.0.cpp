#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//DOES NOT WORK THE WAY I INTENDED AT FIRST
//char privateKey = '~';
//
//void encryption() {
//	srand(time(0));
//	cout << "Enter text to be encrypted: ";
//	string userTextString;
//
//	cin.ignore();
//	getline(cin, userTextString);
//	
//	//converting user's Text from string to char[]
//	char* userTextChar = new char[userTextString.length()];
//	for (int i = 0; i < userTextString.length(); i++) {
//		userTextChar[i] = userTextString[i];
//	}
//
//	//adding as many private keys in a char[] as the characters in user's text.
//	char* multiplePrivateKey = new char[userTextString.length()];
//	for (int i = 0; i < userTextString.length(); i++) {
//		multiplePrivateKey[i] = privateKey;
//	}
//
//	//changing ascii value of privateKey's characters using random numbers. Then, changing user's text with the same numbers accordingly.
//	char* encryptedText = new char[userTextString.length()];
//	for (int i = 0; i < userTextString.length(); i++) {
//		int over126substraction = 0;
//		int randomNumber = rand() % 32 + 94; //from 32 to 126
//
//		multiplePrivateKey[i] = multiplePrivateKey[i] + randomNumber;
//
//		//checking if multiplePrivateKey character is bigger than 126 (if it is, then the character won't be printed because the cmd won't recognize it) and adding the over 126 difference to 32 (the lowest ascii that can be printed).
//		if (multiplePrivateKey[i] > 126) {
//			over126substraction = multiplePrivateKey[i] - 126;
//			multiplePrivateKey[i] = over126substraction + 32;
//		}
//	}
//
//}
//
//void decryption() {
//
//}
//
//int main() {
//	while (true) {
//		cout << "1. Encrypt" << endl;
//		cout << "2. Decrypt" << endl;
//		cout << "3. Exit" << endl;
//		int choice;
//		cin >> choice;
//		if (choice == 1) {
//			encryption();
//		}
//		if (choice == 2) {
//			decryption();
//		}
//		if (choice == 3) {
//			return 0;
//		}
//	}
}