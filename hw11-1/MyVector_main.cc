#include <iostream>
#include "MyVector.h"
#include <vector>
#include <string>
using namespace std;

int main() {
    string command, op, obj;
    int num;
    cin >> command >> num;
    MyVector a(num);
    MyVector b(num);
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;
    while(true) {
        cin >> command;
        if(command == "quit") {
            return 0;
        }
        else {
            cin >> op >> obj;
            if(op == "+") {
                if(command == "a") {
                    if(obj == "b") {
                        a = (a + b);
                        cout << a;
                    }
                    else if(obj == "a") {
                        a = (a+a);
                        cout << a;
                    }
                    else {
                        a = (a+stoi(obj));
                        cout << a;
                    }
                }
                if(command == "b") {
                    if(obj == "b") {
                        b = b+b;
                        cout << b;
                    }
                    else if(obj == "a") {
                        b = b+a;
                        cout << b;
                    }
                    else {
                        b = b+stoi(obj);
                        cout << b;
                    }
                }
            }
            else {
                if(command == "a") {
                    if(obj == "b") {
                        a = (a - b);
                        cout << a;
                    }
                    else if(obj == "a") {
                        a = (a-a);
                        cout << a;
                    }
                    else {
                        a = (a-stoi(obj));
                        cout << a;
                    }
                }
                if(command == "b") {
                    if(obj == "b") {
                        b = b-b;
                        cout << b;
                    }
                    else if(obj == "a") {
                        b = b-a;
                        cout << b;
                    }
                    else {
                        b = b-stoi(obj);
                        cout << b;
                    }
                }
            }
        }
    }
    return 0;
}
