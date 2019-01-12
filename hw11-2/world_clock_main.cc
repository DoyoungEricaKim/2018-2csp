#include <iostream>
#include <string>
#include "world_clock.h"
using namespace std;

int main() {
    string command, time;
    int tick;
    WorldClock clock;
    while (true) {
        cin >> command;
        if(command == "quit") {
            return 0;
        }
        else if(command == "set") {
            cin >> clock;
        }
        else if(command == "tick") {
            cin >> tick;
            clock.Tick(tick);
            cout << clock;
        }
    
    }
    return 0;
}
