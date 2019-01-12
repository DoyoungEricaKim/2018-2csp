#include <iostream>
#include "print_member.h"
using namespace std;

A::A(int a) {
    memberA = new int(a);
    cout << "new memberA " << endl;
}

A::~A() {
    delete memberA;
    cout << "delete memberA" << endl;
}

void A::print() {
    cout << "*memberA " << *memberA << endl;
}

B::B(double b): A(1) {
    memberB = new double(b);
    cout << "new memberB" << endl;
}

B::~B() {
    delete memberB;
    cout << "delete memberB" << endl;
}

void B::print() {
    cout << "*memberB " << *memberB << endl;
}

C::C(string c): B(1.1) {
    memberC = new string(c);
    cout << "new memberC" << endl;
}

C::~C() {
    delete memberC;
    cout << "delete memberC" << endl;
}

void C::print() {
    cout << "*memberC " << *memberC << endl;
}
