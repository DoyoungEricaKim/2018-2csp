#include <iostream>
#include "circle.h"
using namespace std;

int main() {
    double r;
    double p;
    double a;
    
    cin >> r;
    
    p = getCirclePerimeter(r);
    a = getCircleArea(r);
    
    cout << "Perimeter: " << p << endl;
    cout << "Area: " << a << endl;

    return 0;
}
