#pragma once
#include <iostream>
using namespace std;
class MyString {
    private:
        int len;
        char* a;
    public:
        MyString(const char *s);
        MyString(const int n);
        ~MyString();
        MyString operator+(const MyString& a);
        MyString operator*(int a);
        friend ostream& operator<<(ostream& out, MyString& b);
        friend istream& operator>>(istream& in, MyString& b);
};
                                             
