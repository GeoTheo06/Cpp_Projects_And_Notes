#include <iostream>
using namespace std;

class Mama {
	public:
	void provolh() {
		cout << "mama: methodos provolhs";
	}
};

class Gios: public Mama {
	public:
	void provolh() {
		cout << "Gios: methodos provolhs";
	}
};

int main() {
	Gios giwrgos;
	giwrgos.provolh();          //EZ
}