#include <iostream>
#include "print_info.h"
#include <string>
#include <vector>
using namespace std;

void printObjectTypeInfo(A* object) {
    string pm1;
    pm1 = object->getTypeInfo();
    cout << pm1 << endl;
}

void printObjectTypeInfo2(A& object) {
    string pm2;
    pm2 = object.getTypeInfo();
    cout << pm2 << endl;
}

int main() {
    vector<A*> va;
    va.push_back(new A);
    va.push_back(new B);
    va.push_back(new C);

    for(int i = 0; i < va.size(); i++) {
        printObjectTypeInfo(va[i]);
        printObjectTypeInfo2(*va[i]);
    }

    for(int i = 0; i < va.size(); i++) {
        delete va[i];
    }
    
    return 0;
}
