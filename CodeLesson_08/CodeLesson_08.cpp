#include <iostream>

class Animal {
public:
    virtual void Voice() {
        std::cout << "Animal says something" << std::endl;
    }
};

class Dog : public Animal {
public:
    void Voice() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void Voice() override {
        std::cout << "Meow!" << std::endl;
    }
};

class Bird : public Animal {
public:
    void Voice() override {
        std::cout << "Tweet!" << std::endl;
    }
};

int main() {
    const int numAnimals = 3;
    Animal* animals[numAnimals];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Bird();

    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->Voice();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}