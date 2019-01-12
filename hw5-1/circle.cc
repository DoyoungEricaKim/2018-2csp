#include <iostream>
#include "circle.h"
#define PI 3.141592
using namespace std;

double getCirclePerimeter(double r) {
    double p;
    
    p = 2* PI * r;
    
    return p;
}

double getCircleArea(double r) {
    double a;
    
    a = PI * r * r;

    return a;
}
