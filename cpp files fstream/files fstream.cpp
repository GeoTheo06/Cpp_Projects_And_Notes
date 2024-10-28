#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// Writing text to a file
	fstream file;
	file.open("file.txt", fstream::app);
	file << "This is content in a file!\n";
	// Reading text from a file in the code
	string content;
	ifstream fileContent("file.txt");

	while (getline(fileContent, content))
	{ // Note: getline reads the file line by line
		cout << content << endl;
	}

	file.close(); // Close the file to release memory resources
}