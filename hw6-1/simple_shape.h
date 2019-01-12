#pragma once
#include <iostream> 

class Circle {
    double xpos, ypos, r, ca, cp;
    void calAc(double r) { ca = 3.14*r*r; }
    void calPc(double r) { cp = 2*3.14*r; }
public:
    void getC(double x, double y, double r);
    void show();
};

class Rectangle {
    double xpos1, ypos1, xpos2, ypos2, ra, rp;
    void calAr(double xpos1, double ypos1, double xpos2, double ypos2) { ra = (ypos1 - ypos2)*(xpos2 - xpos1); }
    void calPr(double xpos1, double ypos1, double xpos2, double ypos2) { rp = 2*(ypos1 - ypos2) + 2*(xpos2 - xpos1); }
public:
    void getR(double x1, double y1, double x2, double y2);
    void show();
};
