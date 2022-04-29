#include <iostream>
using namespace std;
class Plhktrologio {
public:
	bool rgb;
	string keyColor;
	Plhktrologio(bool rgbTF, string keycolor) {
		rgb = rgbTF;
		string keyColor = keycolor;
	}
};

int main()
{
	Plhktrologio plhktrologio1(true, "red");
	Plhktrologio plhktrologio2(false, "brown");
	Plhktrologio plhktrologio3(true, "blue");
	cout << "plhktrologio 1 " << plhktrologio1.rgb << plhktrologio1.keyColor;
	cout << "plhktrologio 2 " << plhktrologio2.rgb << plhktrologio2.keyColor;
	cout << "plhktrologio 3 " << plhktrologio3.rgb << plhktrologio3.keyColor;
}