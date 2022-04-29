#include <iostream>
using namespace std;

int main() {
	while (5 > 4) {
		string vowels[10] = { "A", "E", "I", "O", "U", "a", "e", "i", "o", "u" };
		string consonants[38] = { "B", "C", "D", "F", "G", "H", "J", "K", "L", "M", "N", "P", "Q", "R", "S", "T", "V","X", "Z", "b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "x", "z" };
		string specials[5] = { "!", "@", "#", "?", "&" };
		string numbers[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

		int megethosKodikou;
		cout << "epelekse megethos kwdikou (minimum 2):";
		cin >> megethosKodikou;

		int misoKodikou = megethosKodikou / 2;
		int alloMisoKodikou = megethosKodikou - misoKodikou;

		string* symfona = new string[misoKodikou - 1];
		string* fonienta = new string[alloMisoKodikou - 1];

		string kodikos;
		srand(time(0)); //dhmiourgei truely generated numbers
		for (int i = 0; i < misoKodikou - 1; i++) {
			symfona[i] = consonants[rand() % 38];
		}
		for (int i = 0; i < alloMisoKodikou - 1; i++) {
			fonienta[i] = vowels[rand() % 10];
		}

		int i = 0;
		while (kodikos.length() < megethosKodikou - 2) {
			kodikos += fonienta[i];
			kodikos += symfona[i];
			i++;
		}
		kodikos += specials[rand() % 5];
		kodikos += numbers[rand() % 9];

		cout << kodikos << endl;
	}
}