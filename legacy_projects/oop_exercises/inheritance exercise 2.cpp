#include <iostream>
using namespace std;

class Vehicle
{
public:
	int wheels;
	bool steeringWheel;
	string fuelType;

	Vehicle(int wheels, bool steeringWheel, string fuelType)
	{
		this->wheels = wheels;
		this->steeringWheel = steeringWheel;
		this->fuelType = fuelType;
	}
};

class Car : public Vehicle
{
public:
	int color;

	Car(int wheelCount, bool hasSteeringWheel, string fuelType, int carColor) : Vehicle(wheelCount, hasSteeringWheel, fuelType)
	{
		wheels = wheelCount;
		steeringWheel = hasSteeringWheel;
		fuelType = fuelType;
		color = carColor;
	}
};

int main()
{
	Car myCar(4, true, "diesel", 5);
	cout << myCar.color;
	Vehicle vehicle1();
}