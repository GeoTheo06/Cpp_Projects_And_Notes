#include <iostream>
using namespace std;

class MyClass {
public:
    void method() { // Internal method definition
        cout << "The first method";
    }

    void method2(); // External method declaration

    int method3(int value); // External method declaration

    int method4(int value) { // Internal method definition
        return value;
    }
};

void MyClass::method2() { // External method definition (from the class)
    cout << "First function outside of the class";
}

int MyClass::method3(int value) { // External method definition
    return value;
}

int main() {
    MyClass obj;
    obj.method3(1000);
    obj.method4(120);
}