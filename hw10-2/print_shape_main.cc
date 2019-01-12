#include <iostream>
#include <string>
#include <vector>
#include "print_shape.h"
using namespace std;

int main() {
    vector<Shape*> shapes;
    double r, w, h;
    string command;
    while(true) {
        cin >> command;
        if(command == "c") {
            cin >> r;
            shapes.push_back(new Circle(r));
        }
        if(command == "r") {
            cin >> w >> h;
            shapes.push_back(new Rectangle(w, h));
        }
        if(command == "0") {
            break;
        }
    }
    for(int i = 0; i < shapes.size(); i++) {
        cout << shapes[i]->getTypeString() << ", ";
        cout << shapes[i]->getArea() << ", ";
        cout << shapes[i]->getPerimeter() << endl;
    }
    
    for(int i = 0; i < shapes.size(); i++) {
        delete shapes[i];
    }

    return 0;
}
