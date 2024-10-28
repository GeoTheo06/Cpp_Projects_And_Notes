#include <iostream>
using namespace std;

class Car
{
public:
	int wheels;
	bool steeringWheel;
	string fuelType;

	Car(int numWheels, bool hasSteeringWheel, string fuel)
	{ // constructor - defined and used automatically
		wheels = numWheels;
		steeringWheel = hasSteeringWheel;
		fuelType = fuel;
	}
};

int main()
{
	Car myCar(4, true, "diesel"); // using the constructor, we can initialize multiple properties in a single line... without a constructor, it would be like this: myCar.wheels = 4, etc.
	// i.e., in one line, you can declare and use a single line

	cout << "The first car has: " << myCar.wheels << " wheels" << endl;
}