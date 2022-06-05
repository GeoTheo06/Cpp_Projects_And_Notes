#include <iostream>
using namespace std;

class Plhktrologio {
public:
	bool rgb;
	string keyColor;
};
class Plhktrologio2 : public Plhktrologio {
public:
	int size;
	Plhktrologio2(bool rgbTF, string keycolor, int theSize) {
		rgb = rgbTF;
		keyColor = keycolor;
		size = theSize;
	}
};

int main() {
	Plhktrologio2 plhktrologio2(false, "brown", 100);
	cout << "xrwma koumpiwn " << plhktrologio2.keyColor << "exei rgb " << plhktrologio2.rgb << "megethos " << plhktrologio2.size << "%";
}