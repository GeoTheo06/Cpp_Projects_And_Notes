#include <iostream>
using namespace std;

class Amaksi {
public:
	int rodes;
	bool timoni;
	string kafsimo;
	Amaksi(int posesRodes, bool exeiTimoni, string tiKaiei) {// constructor - dhlwnetai kai xrhsimopoieitai automata
		rodes = posesRodes;
		timoni = exeiTimoni;
		kafsimo = tiKaiei;
	}
};

int main()
{
	Amaksi aftokinhto(4, true, "diesel"); //xrhsimopoiontas constructor, mporoume na glytosoume polles seires... xwris constructor, tha ginotan auto: aftokinhto.rodes = 4 etc.
	//dhladh se mia grammh mporeis na dhloseis kai na xrhsimopoieis se 1 grammh
	cout << "To prwto amaksi exei: " << aftokinhto.rodes << "rodes" << endl;
}