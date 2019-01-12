#include <iostream>
#include "shapes.h"
#include <vector>
using namespace std;

int main() {
    vector<Shape*> s;
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    s.push_back(new Triangle(a, b));
    s.push_back(new Rectangle(c, d));
    for(int i = 0; i < s.size(); i++) {
        s[i]->getArea();
    }
    for(int i = 0; i < s.size(); i++) {
        delete s[i];
    }
    return 0;
}
