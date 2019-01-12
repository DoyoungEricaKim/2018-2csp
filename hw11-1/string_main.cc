#include <iostream>
#include "string.h"
#include <vector>
#include <string>
using namespace std;

int main() {
    string command, op, obj, ca, cb;
    cin >> command;
    cout << "enter a" << endl;
    cin >> ca;
    MyString a(ca.c_str());
    cout << "enter b" << endl;
    cin >> cb;
    MyString b(cb.c_str());
    while(true) {
        cin >> command;
        if(command == "quit") {
            return 0;
        }
        else {
            cin >> op >> obj;
            if(op == "*") {
                if(command == "a") {
                    MyString c(a * stoi(obj));
                    cout << c;
                }
                else if(command == "b") {
                    MyString d(b * stoi(obj));
                    cout << d;
                }
            }
            else if(op == "+") {
                if(command == "a") {
                    if(obj == "a") {
                        MyString e(a+a);
                        cout << e;
                    }
                    else if(obj == "b") {
                        MyString f(a+b);
                        cout << f;
                    }
                }

                else if(command == "b") {
                    if(obj == "a") {
                        MyString g(b+a);
                        cout << g;
                    }
                    else if(obj == "b") {
                        MyString h(b+b);
                        cout << h;
                    }
                }
            }
        }
    }
    return 0;
}
