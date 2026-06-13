#include <iostream>
using namespace std;

// Base Class (Parent)
class Animal {
public:
    void eat() {
        cout << "I can eat! yam yammm...." << endl;
    }
};

// Derived Class (Child)
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof Woof!" << endl;
    }
};

int main() {
    // Child class ka object banaya
    Dog myDog;

    // Child class ka apna function call kiya
    myDog.bark();

    // Parent class ka function call kiya (Inheritance ki wajah se mila)
    myDog.eat();

    return 0;
}