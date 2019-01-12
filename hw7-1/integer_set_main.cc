#include <iostream>
#include "integer_set.h"
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    IntegerSet set;
    string command;
    while (true) {
        getline(cin, command);
        if (command.substr(0, 4) == "quit")
           return 0;
        if (command.substr(0, 3) == "add") {
            string s = command.substr(4);
            int num = stoi(s);
            set.AddNumber(num);
            set.GetAll();
        }
        if (command.substr(0, 3) == "del") {
            string s = command.substr(4);
            int num = stoi(s);
            set.DeleteNumber(num);
            set.GetAll();

        }
        if (command.substr(0, 3) == "get") {
            string s = command.substr(4);
            int num = stoi(s);
            set.GetItem(num);
        }
    }
    return 0;
}
