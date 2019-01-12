#include <iostream>
#include "sorted_array.h"
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    SortedArray sort;
    string command;

    while (true) {
        cin >>  command;
        if (command.substr(0, 4) == "quit")
            return 0;
        if (command.substr(0, 6) == "ascend") {
            sort.GetSortedAscending(); 
        }
        if (command.substr(0, 7) == "descend") {
            sort.GetSortedDescending();
        }
        if (command.substr(0, 3) == "min") {
            sort.GetMin();
        }
        if (command.substr(0, 3) == "max") {
            sort.GetMax();
        }
        if (isdigit(command[0])){
            char* cstr = new char [command.length() + 1];
            strcpy(cstr, command.c_str());
            char * p = strtok(cstr, " ");
            while (p != 0) {
                int num = atoi(p);
                sort.AddNumber(num);
                p = strtok(NULL, " ");
            }
            delete[] cstr;
        }
    }
        
    return 0;
}
