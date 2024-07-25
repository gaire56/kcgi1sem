/*GAIRE ANANTA PRASAS
M24W0272*/
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Animal {
public:
    // Constructor
    Animal(const string& name, int age) : name(name), age(age) {}

    // Virtual function to describe the animal
    virtual void makeSound() const {
        cout << "This animal makes a sound." << endl;
    }

    // Virtual destructor
    virtual ~Animal() {}

protected:
    string name;
    int age;
};

// Derived Class for Dog
class Dog : public Animal {
public:
    // Constructor
    Dog(const string& name, int age, const string& breed)
        : Animal(name, age), breed(breed) {}

    // Override the makeSound function
    void makeSound() const override {
        cout << name << " the " << breed << " dog says: bhoouuu! bhoouuu! Tommy is "  << age << " years old" << endl;
    }

private:
    string breed;
};

// Derived Class for Bird
class Bird : public Animal {
public:
    // Constructor
    Bird(const string& name, int age, bool canFly)
        : Animal(name, age), canFly(canFly) {}

    // Override the makeSound function
    void makeSound() const override {
        cout << name << " the bird says: Trroorr! Trroorr!. Tweety is " << age <<" Years old" << endl;
        if (canFly) {
            cout << name << " can fly." << endl;
        } else {
            cout << name << " cannot fly." << endl;
        }
    }

private:
    bool canFly;
};

int main() {
    // Create a Dog object
    Animal* myDog = new Dog("Tommy", 3, "Local");
    myDog->makeSound();

    // Create a Bird object
    Animal* myBird = new Bird("Tweety", 1, true);
    myBird->makeSound();

   /* // Clean up
    delete myDog;
    delete myBird;
    */

    return 0;
}
