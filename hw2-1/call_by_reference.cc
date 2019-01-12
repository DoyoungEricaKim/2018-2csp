#include <stdio.h>

void square(double* pi) {
    double temp;
    temp = (*pi)*(*pi);
    *pi = temp;
}

int main() {
    double dvar;
    scanf("%lf", &dvar);
    square(&dvar);
    printf("%f", dvar);
    return 0;
}
