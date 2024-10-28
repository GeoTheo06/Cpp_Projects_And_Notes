#include <iostream>
//you first need to include thread:
#include <thread>
using namespace std;

int main()
{
	while (true)
	{
		cout << "Hello World!" << endl;
		this_thread::sleep_for(chrono::milliseconds(2)); //or this_thread::sleep_for(chrono::seconds(2));
	}
}