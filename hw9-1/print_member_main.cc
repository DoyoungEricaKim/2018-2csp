#include <iostream>
#include "print_member.h"
#include <string>
#include <vector>
using namespace std;

int main() {
    int a;
    double b;
    string c;
    vector<A*> va;

    cin >> a;
    cin >> b;
    cin >> c;
    va.push_back(new A(a));
    va.push_back(new B(b));
    va.push_back(new C(c));

    
    for(int i = 0; i < va.size(); i++) {
        va[i]->print();
    }

    for(int i =0; i < va.size(); i++) {
        delete va[i];
    }
    return 0;
}
