#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    void eat() {
        cout << name << " is eating." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }

    // This function will be overridden
    void makeSound() {
        cout << name << " makes a generic animal sound." << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << name << " says: Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << name << " says: Meow!" << endl;
    }
};

// Derived class: Cow
class Cow : public Animal {
public:
    void makeSound() {
        cout << name << " says: Moo!" << endl;
    }
};

int main() {
    Dog dog;
    dog.name = "Buddy";
    dog.eat();
    dog.makeSound();

    Cat cat;
    cat.name = "Whiskers";
    cat.sleep();
    cat.makeSound();

    Cow cow;
    cow.name = "Daisy";
    cow.eat();
    cow.makeSound();

    return 0;
}
