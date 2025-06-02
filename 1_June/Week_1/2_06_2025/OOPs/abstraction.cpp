#include <iostream>
using namespace std;

class Animal {
public:
    string species;
    int age;
    string name;

    void eat() {
        cout << name << " is eating." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }

    // Abstracting how the sound is made
    void makeSound() {
        if (species == "Dog") {
            cout << name << " says: Woof!" << endl;
        } else if (species == "Cat") {
            cout << name << " says: Meow!" << endl;
        } else {
            cout << name << " makes a sound." << endl;
        }
    }
};

int main() {
    Animal dog;
    dog.name = "Buddy";
    dog.species = "Dog";
    dog.age = 3;

    Animal cat;
    cat.name = "Whiskers";
    cat.species = "Cat";
    cat.age = 2;

    dog.makeSound();  // Buddy says: Woof!
    cat.makeSound();  // Whiskers says: Meow!

    return 0;
}
