#include <iostream>
using namespace std;

class MyClass
{
	// protected:
public:			// accessible throughout the code
	int x = 10; // public property

private:		// accessible only within the class
	int y = 10; // private property
};

class Employee
{
private:
	int salary;

public:
	void setSalary(int valueSalary)
	{
		salary = valueSalary;
	}
	int getSalary()
	{
		return salary;
	}
};

int main()
{
	MyClass obj;

	// cout << obj.x; works because it is public
	//  cout << obj.y; doesn't work because it is private

	// accessing the value using get and set methods
	Employee george;
	george.setSalary(5000);
	cout << george.getSalary();
}