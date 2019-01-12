#include <iostream>
#include <vector>
#include "classes.h"
using namespace std;

int main() {
    vector<A*> va;
    va.push_back(new A);
    va.push_back(new B);
    va.push_back(new C);

    for(int i = 0; i < va.size(); i++) {
        va[i]->test();
    }
    
    for(int i = 0; i < va.size(); i++) {
        delete va[i];
    }

    return 0;
}
