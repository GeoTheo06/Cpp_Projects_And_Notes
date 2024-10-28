#include <iostream>
using namespace std;

class Keyboard
{
public:
	bool rgb;
	string keyColor;
};

class Keyboard2 : public Keyboard
{
public:
	int size;
	Keyboard2(bool rgbTF, string keyColor, int theSize)
	{
		rgb = rgbTF;
		keyColor = keyColor;
		size = theSize;
	}
};

int main()
{
	Keyboard2 keyboard2(false, "brown", 100);
	cout << "Button color: " << keyboard2.keyColor << ", RGB: " << keyboard2.rgb << ", Size: " << keyboard2.size << "%" << endl;
}