#pragma once
#include <string>
using namespace std;

class Animal {
    public:
        Animal(string name, int age);
        virtual void printInfo();
        string _name;
        int _age;
};

class Zebra: public Animal {
    public:
        Zebra(string name, int age, int numStripes);
        void printInfo();
        int _numStripes;
};

class Cat: public Animal {
    public:
        Cat(string name, int age, string favoriteToy);
        void printInfo();
        string _favoriteToy;
};

