#include <iostream>
using namespace std;

class Plant
{
public:
	void scent()
	{
		cout << "generic scent" << endl;
	}
};

class Poppy : public Plant
{
public:
	void scent()
	{
		cout << "sweet scent" << endl;
	}
};

class Daisy : public Plant
{
public:
	void scent()
	{
		cout << "gentle" << endl;
	}
};

int main()
{
	// Essentially, polymorphism allows you to create child classes that have functions with the same name as their parent class. It will take the latest function defined. For example, the Poppy class could inherit the scent function from the Plant class because generally, children inherit the characteristics of their parents, but polymorphism gives you the latest function it finds. So instead of giving you "generic scent," it will give you "sweet scent."
	Plant myPlant;
	myPlant.scent();

	Daisy myDaisy;
	myDaisy.scent();

	Poppy myPoppy;
	myPoppy.scent();
}