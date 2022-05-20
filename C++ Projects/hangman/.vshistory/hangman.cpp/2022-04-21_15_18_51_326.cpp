#include <iostream>
using namespace std;

void monos() {

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