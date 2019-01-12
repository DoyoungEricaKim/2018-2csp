#include <iostream>
#include "number.h"
#include <string>
#include <cstring>
using namespace std;

int main() {
    string command;
    int in, is, ic, num;
    Number n;
    Square s;
    Cube c;

    while(true) {
        getline(cin, command);
        if(command.substr(0, 4) == "numb") {
            num = stoi(command.substr(7));
            n.setNumber(num);
            in = n.getNumber();
            cout << "getNumber(): " << in << endl; 
        }
        if(command.substr(0, 4) == "squa") {
            num = stoi(command.substr(7));
            s.setNumber(num);
            in = s.getNumber();
            is = s.getSquare();
            cout << "getNumber(): " << in << endl;
            cout << "getSquare(): " << is << endl;
        }
        if(command.substr(0, 4) == "cube") {
            num = stoi(command.substr(5));
            c.setNumber(num);
            in = c.getNumber();
            is = c.getSquare();
            ic = c.getCube();
            cout << "getNumber(): " << in << endl;
            cout << "getSquare(): " << is << endl;
            cout << "getCube(): " << ic << endl;
        }
        if(command.substr(0, 4) == "quit") {
            return 0;
        }
    }

    return 0;
}
