#include <iostream>
#include "simple_shape.h"
using namespace std;

void Circle::getC(double x, double y, double r) {
    xpos = x;
    ypos = y;
    r = r;
    
    calAc(r);
    calPc(r);
}

void Circle::show() {
    cout << "area: " << ca << ", perimeter: " << cp << endl;
}

void Rectangle::getR(double x1, double y1, double x2, double y2) {
    xpos1 = x1;
    ypos1 = y1;
    xpos2 = x2;
    ypos2 = y2;
    
    calAr(xpos1, ypos1, xpos2, ypos2);
    calPr(xpos1, ypos1, xpos2, ypos2);
}

void Rectangle::show() {
    cout << "area: " << ra << ", perimeter: " << rp << endl;
}
