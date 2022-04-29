#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

void monos() {
	string randomLeksh;
	ifstream periexomenoArxeiou("words.txt");
	int randomArithmos = (rand() % 300);

	for (int i = 0; i <= randomArithmos; i++) {
		getline(periexomenoArxeiou, randomLeksh);
	}
}

void meFilo() {

}

int main() {
	cout << "                KREMALA" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "paikse monos sou (1)" << endl;
	cout << "paikse me filo (2)" << endl;
	int epilogh;
	cin >> epilogh;
	if (epilogh == 1) {
		monos();
	} else if (epilogh == 2) {
		meFilo();
	} else {
		cout << "lathos epilogh!";
	}
}