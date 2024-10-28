#include <iostream>
using namespace std;
class Keyboard
{
public:
	bool rgb;
	string keyColor;
	Keyboard(bool rgbTF, string keycolor)
	{
		rgb = rgbTF;
		string keyColor = keycolor;
	}
};

int main()
{
	Keyboard keyboard1(true, "red");
	Keyboard keyboard2(false, "brown");
	Keyboard keyboard3(true, "blue");
	cout << "Keyboard 1 " << keyboard1.rgb << keyboard1.keyColor;
	cout << "Keyboard 2 " << keyboard2.rgb << keyboard2.keyColor;
	cout << "Keyboard 3 " << keyboard3.rgb << keyboard3.keyColor;
}