#include <iostream>
#include <cstdlib>
#include <cstring>
#include "magic_square.h"
using namespace std;

int main(int argc, const char** argv) {
    int n = atoi(argv[1]);
    int **arr = new int*[n];
    for (int i = 0; i < n; ++i)
        arr[i] = new int[n];

    if (n % 2 == 0 || n < 3)
        return 0;
    else
        magicSquare(n, arr);
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            cout << arr[j][k] << " ";
        }
        cout << endl;
    }

    delete[] arr;
    return 0;
}
