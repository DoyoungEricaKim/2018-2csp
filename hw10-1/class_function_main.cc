#include <iostream>
#include "class_function.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    string command;
    vector<A*> a;
    while(true) {
        cin >> command;
        if(command == "B") {
            a.push_back(new B);
        }
        else if(command == "C") {
            a.push_back(new C);
        }
        else if(command == "BB") {
            a.push_back(new BB);
        }
        else if(command == "0") {
            break;
        }
    }
    for(int i = 0; i < a.size(); i++) {
        a[i]->test1();
        a[i]->test2();
    }
    for(int i = 0; i < a.size(); i++) {
        delete a[i];
    }
    return 0;
}
