#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj1;

    // Creating another object of MyClass dynamically
    MyClass* obj2 = new MyClass();

    // Deleting the dynamically allocated object
    delete obj2;

    return 0;
}
