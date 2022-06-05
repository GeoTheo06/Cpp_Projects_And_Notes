#include <iostream>
using namespace std;

class ThisIsAClass {
private:
	int thisIsAnInt;

public:
	void set1(int noThisIsAnInt) {
		thisIsAnInt = noThisIsAnInt;
	}

	int get1() {
		return thisIsAnInt;
	}
};

int main() {
	ThisIsAClass giwrgos;
	giwrgos.set1(15);
	cout << giwrgos.get1();
}