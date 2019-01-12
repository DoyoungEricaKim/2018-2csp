#include <iostream>
#include "dynamic_cast.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    string command;
    vector<B*> b;

    while(true) {
        cin >> command;
        if(command == "B") {
            b.push_back(new B);
        }
        else if(command == "C") {
            b.push_back(new C);
        }
        else if(command == "D") {
            b.push_back(new D);
        }
        else if(command == "0") {
            break;
        }
    }
    for(int i = 0; i < b.size(); i++) {
        C* pc = dynamic_cast<C*>(b[i]);
        D* pd = dynamic_cast<D*>(b[i]);
            if(pc)
                pc->test_C();
            if(pd)
                pd->test_D();
    }
    for(int i = 0; i < b.size(); i++) {
        delete b[i];
    }
    return 0;
}
