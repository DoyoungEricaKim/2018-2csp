#include <iostream>
#include "magic_square.h"

void magicSquare(int n, int** arr) {

    for (int i = 0, j = n/2, num = 1; num <= n*n; num++) {
        arr[i][j] = num;
        if (num % n == 0) {
            i++;
        }
        else {
            i--, j++;
            if (i < 0)
                i = n - 1;
            if (j > (n - 1))
                j = 0;
        }
    }
}
