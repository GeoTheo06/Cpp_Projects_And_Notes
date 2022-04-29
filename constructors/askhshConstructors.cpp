#include <iostream>
#include <iomanip>
using namespace std;

class Oikonomia {
public:
	int mathhmatika;
	int ekthesh;
	int plhroforikh;
	Oikonomia(int mathhmatika1, int ekthesh1, int plhroforikh1) {
		mathhmatika = mathhmatika1;
		ekthesh = ekthesh1;
		plhroforikh = plhroforikh1;
	}
};

class Thewrhtika {
public:
	int glwssa;
	int arxaia;
	int logotexnia;
	Thewrhtika(int glwssa1, int arxaia1, int logotexnia1) {
		glwssa = glwssa1;
		arxaia = arxaia1;
		logotexnia = logotexnia1;
	}
};

int main() {
	double mesosOrosOikonomias;
	double mesosOrosThewrhtikwn;
	double genikos;
	int arithmosMathhtwn;
	string onomaMathhth;

	//oikonomia
	int bathmosMathhmatikwn;
	int bathmosEktheshs;
	int bathmosPlhroforikhs;

	//thewrhtika
	int bathmosGlwssas;
	int bathmosArxaiwn;
	int bathmosLogotexnias;
	cout << "posous mathhtes tha eisagete;" << endl;
	cin >> arithmosMathhtwn;

	int* Bathmoi = new int[arithmosMathhtwn];

	for (int i = 0; i < arithmosMathhtwn; i++) {
		cout << endl << "onoma Mathhth " << i + 1 << ":" << endl;
		cin >> onomaMathhth;

		//oikonomia
		cout << "bathmos mathhmatikwn:";
		cin >> bathmosMathhmatikwn;

		cout << "bathmos ektheshs:";
		cin >> bathmosEktheshs;

		cout << "bathmos plhroforikhs:";
		cin >> bathmosPlhroforikhs;

		Oikonomia oikonomiaMathhth(bathmosMathhmatikwn, bathmosEktheshs, bathmosPlhroforikhs);

		mesosOrosOikonomias = (oikonomiaMathhth.ekthesh + oikonomiaMathhth.mathhmatika + oikonomiaMathhth.plhroforikh) / 3;

		//thewrhthika
		cout << "bathmos glwssas:";
		cin >> bathmosGlwssas;

		cout << "bathmos Arxaiwn:";
		cin >> bathmosArxaiwn;

		cout << "bathmos Logotexnias:";
		cin >> bathmosLogotexnias;

		Thewrhtika thewrhtikaMathhth(bathmosGlwssas, bathmosArxaiwn, bathmosLogotexnias);

		mesosOrosThewrhtikwn = (thewrhtikaMathhth.arxaia + thewrhtikaMathhth.glwssa + thewrhtikaMathhth.logotexnia) / 3;

		genikos = (mesosOrosThewrhtikwn + mesosOrosOikonomias) / 2;
		cout << setprecision(1) << fixed;
		cout << "o mesos oros tou " + onomaMathhth << " " << "sthn oikonomia einai " << mesosOrosOikonomias << " " << "kai sta thewrhtika einai " << mesosOrosThewrhtikwn << " " << "o genikos tou einai " << genikos << endl;

		Bathmoi[i] = genikos;
	}
	int k;
	for (int i = 1; i < arithmosMathhtwn; i++) {
		if (Bathmoi[0] < Bathmoi[i]) {
			k = i;
			Bathmoi[0] = Bathmoi[i];
		}
	}

	cout << "O mathhths " << k << " katexei thn ypshloterh bathmologia tou " << Bathmoi[0] << " sta 20!" << endl;
}

/*
class Oikonomia {
	public:
	int mathhmatika;
	int ekthesh;
	int plhroforikh;
	Oikonomia (int mathhmatika1, int ekthesh1, int plhroforikh1) {
		mathhmatika = mathhmatika1;
		ekthesh = ekthesh1;
		plhroforikh = plhroforikh1;
	}
};

class Thewrhtika {
	public:
	int glwssa;
	int arxaia;
	int logotexnia;
	{
		glwssa = glwssa1;
		arxaia = arxaia1;
		logotexnia = logotexnia1;
	}
};

int main ( ) {
Oikonomia Mhxalhs(17, 20, 15);
Oikonomia Giannhs(13, 11, 19);
Thewrhtika Mhxalhs (20, 18, 16);
Thewrhtika Giannhs(18, 19,20);}
*/