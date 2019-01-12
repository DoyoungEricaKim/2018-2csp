#include <iostream>
#include "calendar.h"
#include <string>
using namespace std;

int main() {
    string command, day;
    Date calendar;
    while(true) {
        cin >> command;
        if(command == "quit") {
            return 0;
        }
        else if(command == "set") {
            cin >> calendar;
        }
        else if(command == "next") {
            cin >> day;
            if(day == "day") {
                calendar.NextDay(1);
                cout << calendar;
            }
            else {
                calendar.NextDay(stoi(day));
                cout << calendar;
            }
        }
    }
    return 0;
}
