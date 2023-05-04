#include <iostream>
using namespace std;

class ThisIsAClass
{
private:
	int initialValue;

public:
	void set1(int newValue)
	{
		initialValue = newValue;
	}

	int get1()
	{
		return initialValue;
	}
};

int main()
{
	ThisIsAClass me;
	me.set1(15);
	cout << me.get1();
}
