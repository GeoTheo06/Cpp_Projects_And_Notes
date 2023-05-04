#include <iostream>
using namespace std;

class McDonalds
{
public:
	void Employees()
	{
		cout << "Total number of employees: 1000" << endl;
	}
};

class Store1 : public McDonalds
{
public:
	void Employees()
	{
		cout << "Number of employees in Store 1: 250" << endl;
	}
};

class Store2 : public McDonalds
{
public:
	void Employees()
	{
		cout << "Number of employees in Store 2: 250" << endl;
	}
};

class Store3 : public McDonalds
{
public:
	void Employees()
	{
		cout << "Total number of employees in Store 3: 250" << endl;
	}
};

class Store4 : public McDonalds
{
public:
	void Employees()
	{
		cout << "Total number of employees in Store 4: 250" << endl;
	}
};

int main()
{
	McDonalds iHaveMcDonalds;
	iHaveMcDonalds.Employees();

	Store1 firstStore;
	firstStore.Employees();

	Store2 secondStore;
	secondStore.Employees();

	Store3 thirdStore;
	thirdStore.Employees();

	Store4 fourthStore;
	fourthStore.Employees();
}