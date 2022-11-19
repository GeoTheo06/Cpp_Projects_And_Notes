#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Assign vector 
    vector<int> vec;

    // fill the array with 12 seven times 
    vec.assign(7, 12);

    //print the elements of the vector
    cout << "The vector elements are: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    // inserts 24 to the last position which is vec.size() - 1
    vec.push_back(24);
    cout << "The last element is: " << vec[vec.size() - 1];

    // removes last element 
    vec.pop_back();

    // inserts 10 at the beginning 
    vec.insert(vec.end(), 10, 3);

    vec.insert(vec.begin() + 2, 10);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    //removes first element
    vec.erase(vec.begin());
    //removes the whole array
    vec.erase(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        vec.erase(vec.begin() + i);
    }
}