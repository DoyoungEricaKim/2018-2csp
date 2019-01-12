#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff) {
    *pSum = a + b;
    *pDiff = a - b;
}

int main(void) {
    int a, b, c, d;

    scanf("%d %d", &a, &b);
    getSumDiff(a, b, &c, &d);
    printf("Sum: %d\n", c);
    printf("diff: %d\n", d);
 
    return 0;
}
