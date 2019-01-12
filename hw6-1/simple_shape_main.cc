#include <iostream>
#include "simple_shape.h"
using namespace std;

int main() {
    char shape;
    double x, y, z, a;
    
    while (true) {
        cout << "shape?" << endl;
        cin >> shape;
        if (shape == 'Q') 
            break;
        if (shape == 'C') {
            cin >> x >> y >> z;
            Circle c;
            c.getC(x, y, z);
            c.show();
        }
        if (shape == 'R') {
            cin >> x >> y >> z >> a;
            Rectangle r;
            r.getR(x, y, z, a);
            r.show();
        }
    }
    return 0;
}
