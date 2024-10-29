#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// Declare and initialize vector
	vector<int> vec;

	// Fill the vector with 12, seven times
	vec.assign(7, 12);

	// Print the elements of the vector
	cout << "The vector elements are: ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	// Insert 24 at the end
	vec.push_back(24);
	cout << "The last element is: " << vec.back() << endl;

	// Remove the last element
	vec.pop_back();

	// Insert 10 at the end 3 times
	vec.insert(vec.end(), 3, 10);

	// Insert 10 at the beginning
	vec.insert(vec.begin(), 10);

	// Print the elements of the vector
	cout << "The vector elements are: ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	// Remove the first element
	vec.erase(vec.begin());

	// Remove the entire vector
	vec.clear();

	// Print the elements of the vector
	cout << "The vector is empty." << endl;

	return 0;
}