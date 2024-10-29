#include <iostream>
using namespace std;

// Inheritance

class MobilePhone
{ // Parent
public:
	int buttons;
	bool charger;
	string brand;
};

class MobilePhoneV2 : public MobilePhone
{ // Child // Class initialization as an extension of MobilePhone
public:
	bool camera; // Extra feature of the mobile phone

	MobilePhoneV2(int numOfButtons, bool hasCharger, string brandName, bool hasCamera)
	{ // Note that we use the constructor in the child class, not in the main class
		buttons = numOfButtons;
		charger = hasCharger;
		brand = brandName;
		camera = hasCamera;
	}
};

class MobilePhoneV3 : public MobilePhoneV2
{ // Grandchild // Class initialization as an extension of MobilePhoneV2
};

// Inheritance

class Father
{
public:
	string fatherName;
	void fatherMessage()
	{
		cout << "Greetings from Father";
	}
};

class Mother
{
public:
	string motherName;
	void motherMessage()
	{
		cout << "Greetings from Mother";
	}
};

class Me : public Father, public Mother
{
};

int main()
{
	// Inheritance
	MobilePhoneV2 newPhone(14, true, "sony", true);
	newPhone.brand = "apple";

	// Combination
	Me george;
	george.motherName = "mama";
	george.fatherName = "papa";
	george.motherMessage();
	george.fatherMessage();
	// That means by combining multiple objects into one, we can use one object to have all the information.
}
