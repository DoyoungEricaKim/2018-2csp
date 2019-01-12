#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 4;
    double c = static_cast<double>(a);
    double d = static_cast<double>(b);
    cout << c/d << endl;
    return 0;
}
