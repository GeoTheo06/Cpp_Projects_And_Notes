// Na graftei klash me onoma Sxhma h opoia na exei dyo times. To ypsos kai to platos. Gia na orisete to ypsos kai to platos tha to kanete me set.
// Na ginoun 2 upoklaseis (childs) me onomata Trigwno kai Tetragwno ta opoia tha exoun th methodo emvado() kai tha ypologizete to emvado tou kathe ena.
//Sto kyrio programma tha ftiaksete ena tetragwno kai ena trigwno. Tha tous dwsete ypsos kai platos me thn methodo set apo thn parent class kai tha ypologizete to emvado tous.
//Embado tetragwnou = platos x ypsos
//Embado trigwnou = platos * ipsos / 2
#include <iostream>

using namespace std;
class Sxhma {
	public:
	int ypsos;
	int platos;
	int set(int tiYpsos, int tiPlatos) {
		ypsos = tiYpsos;
		platos = tiPlatos;
		return 0;
	}
};

class Tetragwno: public Sxhma {
	public:
	int emvado() {
		int apotelesma = platos * ypsos;
		return apotelesma;
	}
};

class Trigwno: public Sxhma {
	public:
	int emvado() {
		int apotelesma = (platos * ypsos) / 2;
		return apotelesma;
	}
};

int main() {
	while (5.1 > 5.0) {
		cout << "grapse ypsos kai platos tetragwnou me ena keno anamesa tous" << endl;
		Tetragwno tetragwno1;
		int ypsosTet;
		int platosTet;

		cin >> ypsosTet >> platosTet;

		tetragwno1.set(ypsosTet, platosTet);
		cout << "Embado tetragwnou: " << tetragwno1.emvado() << endl;

		cout << "grapse ypsos kai platos Trigwnou me ena keno anamesa tous" << endl;
		Trigwno trigwno1;
		int ypsosTrig;
		int platosTrig;

		cin >> ypsosTrig >> platosTrig;
		trigwno1.set(ypsosTrig, platosTrig);
		cout << "Embado trigwnou: " << trigwno1.emvado() << endl;
	}
}
																					//EZ