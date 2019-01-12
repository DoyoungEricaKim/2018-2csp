#include <iostream>
#include <string>
#include <string.h>
#include "string.h"
using namespace std;

MyString::MyString(const char *s) {
    len = strlen(s);
    a = new char[len+1];
    strcpy(a, s);
}

MyString::MyString(const int n) {
    len = n;
    a = new char[len+1];
}

MyString::~MyString() {
    delete[] a;
}

MyString MyString::operator+(const MyString& a) {
    int newL = a.len + this->len;
    MyString newS1(newL);
    for(int i = 0; i < this->len; i++) {
        newS1.a[i] = this->a[i];
    }
    for(int i = this->len; i < newL; i++) {
        newS1.a[i] = a.a[i-(this->len)];
    }
    return newS1;
}

MyString MyString::operator*(int a) {
    int newL = (this->len) * a;
    MyString newS2(newL);
    for(int j = 0; j < a; j ++) {
        for(int i = 0; i < this->len; i++) {
            newS2.a[(j*this->len)+i] = this->a[i];
        }
    } 
    return newS2;   
}

ostream& operator<<(ostream& out, MyString& b) {
    for(int i = 0; i < b.len; i++) {
        cout << b.a[i];
    }
    cout << endl;
}


istream& operator>>(istream& in, MyString& b) {
    in >> b.a;
}
