// Define a class named "Shape" that has two values: height and width. To define the height and width, use the "set" method.
// Create two subclasses called "Triangle" and "Rectangle" which have the method "area()" to calculate the area of each shape.
// In the main program, create an instance of a rectangle and a triangle. Set their height and width using the set method from the parent class, and calculate their areas.
#include <iostream>

using namespace std;
class Shape
{
public:
	int height;
	int width;
	int set(int inputHeight, int inputWidth)
	{
		height = inputHeight;
		width = inputWidth;
		return 0;
	}
};

class Rectangle : public Shape
{
public:
	int area()
	{
		int result = width * height;
		return result;
	}
};

class Triangle : public Shape
{
public:
	int area()
	{
		int result = (width * height) / 2;
		return result;
	}
};

int main()
{
	while (true)
	{
		cout << "Enter the height and width of the rectangle with a space in between" << endl;
		Rectangle rectangle1;
		int heightRec;
		int widthRec;
		cin >> heightRec >> widthRec;

		rectangle1.set(heightRec, widthRec);
		cout << "Area of the rectangle: " << rectangle1.area() << endl;

		cout << "Enter the height and base of the triangle with a space in between" << endl;
		Triangle triangle1;
		int heightTri;
		int baseTri;

		cin >> heightTri >> baseTri;
		triangle1.set(heightTri, baseTri);
		cout << "Area of the triangle: " << triangle1.area() << endl;
	}
}