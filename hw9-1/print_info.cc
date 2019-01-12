#include <iostream>
#include "print_info.h"
#include <string>
using namespace std;

string A::getTypeInfo() {
    string ma;
    ma = "This is an instance of class A";
    return ma;
}

string B::getTypeInfo() {
    string mb;
    mb = "This is an instance of class B";
    return mb;
}

string C::getTypeInfo() {
    string mc;
    mc = "This is an instance of class C";
    return mc;
}
