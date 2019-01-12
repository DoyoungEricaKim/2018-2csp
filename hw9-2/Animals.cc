#include <iostream>
#include <string>
#include "Animals.h"
using namespace std;

Animal::Animal(string name, int age) {
    _name = name;
    _age = age;
}

void Animal::printInfo() {}

Zebra::Zebra(string name, int age, int numStripes):Animal(name, age) {
    _numStripes = numStripes;
}

void Zebra::printInfo() {
    cout << "Zebra, Name: " << _name << ", Age: " << _age << ", Number of stripes: " << _numStripes << endl;
}

Cat::Cat(string name, int age, string favoriteToy):Animal(name, age) {
    _favoriteToy = favoriteToy;
}
void Cat::printInfo() {
    cout << "Cat, Name: " << _name << ", Age: " << _age << ", Favorite toy: " << _favoriteToy << endl;
}
