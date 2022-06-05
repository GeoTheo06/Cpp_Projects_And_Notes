#include <iostream>
using namespace std;

class Amaksi {
	public:
	int rodes;
	bool timoni;
	string kafsimo;
	Amaksi(int rodes, bool timoni, string kafsimo) {
		this->rodes = rodes;
		this->timoni = timoni;
		this->kafsimo = kafsimo;
	}
};

class Amaksi2: public Amaksi {
	public:
	int xrwma;

	Amaksi2(int posesRodes, bool exeiTimoni, string tiKaiei, int tiXrwma): Amaksi(posesRodes, exeiTimoni, tiKaiei) {
		rodes = posesRodes;
		timoni = exeiTimoni;
		kafsimo = tiKaiei;
		xrwma = tiXrwma;
	}
};

int main() {
	Amaksi2 aftokinhto(4, true, "diesel", 5);
	cout << aftokinhto.xrwma;
	Amaksi amaksi1();
}