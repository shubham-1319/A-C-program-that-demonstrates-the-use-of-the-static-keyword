#include <iostream>

class MyClass {
public:
    static int count; // Declaration

    MyClass() {
        count++; //Object is created
    }

    static void displayCount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};

// Initializing static variable 
int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::displayCount(); 

    return 0;
}
