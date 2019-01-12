#pragma once
#include <iostream>
#include <string>
using namespace std;

class A {
    public:
        A(int a);
        virtual ~A();
        virtual void print();
        int getParam();
    private: 
        int* memberA; 
};

class B: public A {
    public:
        B(double b);
        virtual ~B();
        virtual void print();
    private:
        double* memberB;
};

class C: public B {
    public:
        C(string c);
        virtual ~C();
        virtual void print();
    private:
        string* memberC;
};
