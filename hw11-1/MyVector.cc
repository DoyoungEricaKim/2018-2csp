#include <iostream>
#include "MyVector.h"
using namespace std;
MyVector::MyVector(int n) {
    max_num = n;
    a = new double[n];
}

MyVector::~MyVector() {
    delete[] a;
}

MyVector MyVector::operator=(const MyVector& a) {
    MyVector newV(a.max_num);
    for(int i = 0; i < a.max_num; i++) {
        newV.a[i] = a.a[i];
        this->a[i] = newV.a[i];
    }
    return newV;
}
MyVector MyVector::operator+(const MyVector& a) {
    MyVector newV(a.max_num);
    for(int i = 0; i < a.max_num; i++) {
        newV.a[i] = this->a[i] + a.a[i];
        this->a[i] = newV.a[i];
    }
    return newV;
}

MyVector MyVector::operator-(const MyVector& a) {
    MyVector newV(a.max_num);
    for(int i = 0; i < a.max_num; i++) {
        newV.a[i] = this->a[i] - a.a[i];
        this->a[i] = newV.a[i];
    }
    return newV;
}

MyVector MyVector::operator+(const int a) {
    MyVector newV(max_num);
    for(int i = 0; i < max_num; i++) {
        newV.a[i] = this->a[i] + a;
        this->a[i] = newV.a[i];
    }
    return newV;
}

MyVector MyVector::operator-(const int a) {
    MyVector newV(max_num);
    for(int i = 0; i < max_num; i++) {
        newV.a[i] = this->a[i] - a;
        this->a[i] = newV.a[i];
    }
    return newV;
}

ostream& operator<<(ostream& out, MyVector& b) {
    for(int i = 0; i < b.max_num; i++) {
        out << b.a[i] << " ";
    }
    cout << endl;
}

istream& operator>>(istream& in, MyVector& b) {
    for(int i = 0; i < b.max_num; i++) {
        in >> b.a[i];
    }
}
