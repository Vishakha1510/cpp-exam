#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual void move() const = 0;
};

class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "Lion roars" << endl;
    }

    void move() const override {
        cout << "Lion walks" << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() const override {
        cout << "Fish bubbles" << endl;
    }

    void move() const override {
        cout << "Fish swims" << endl;
    }
};

int main() {

    Animal* animals[2];

    Lion lion;
    Fish fish;

    animals[0] = &lion;
    animals[1] = &fish;

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
        animals[i]->move();
    }

    return 0;
}

