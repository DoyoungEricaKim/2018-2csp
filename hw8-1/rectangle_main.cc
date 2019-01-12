#include <iostream>
#include <string>
#include <cstring>
#include "rectangle.h"
using namespace std;

int main() {
    string command;
    int w, h, space;
    //NonSquare ns;

    while(true) {
        getline(cin, command);
        if(command.substr(0, 4) == "squa") {
            w = stoi(command.substr(7));
            Square s(w);
            s.print();
        }
        if(command.substr(0, 4) == "nons") {
            for(int i = 10; command[i] != '\0'; i++) {
                if(command[i] == ' ') {
                    space = i;
                    break;
                }
            }
            w = stoi(command.substr(10, space - 10));
            h = stoi(command.substr(space + 1));
            NonSquare ns(w, h);
            ns.print();
        }
        if(command.substr(0, 4) == "quit") {
            return 0;
        }
    }
    
    return 0;
}
