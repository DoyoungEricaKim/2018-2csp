#include <stdio.h>

typedef struct {
    double real;
    double img;   
} Complex;

void printAddComp(Complex n1, Complex n2) {
    printf("두 복소수의 합:\n");
    printf("%lf + %lfi\n", n1.real + n2.real, n1.img + n2.img);
}

void printMulComp(Complex n1, Complex n2) {
    printf("두 복소수의 곱:\n");
    printf("%lf + %lfi\n", n1.real * n2.real - n1.img * n2.img, n1.real * n2.img + n1.img * n2.real);
}

void printComplex(Complex n1, Complex n2) {
    printf("복소수1:\n");
    printf("%lf + %lfi\n", n1.real, n1.img);
    printf("복소수2:\n");
    printf("%lf + %lfi\n", n2.real, n2.img);
}

int main() {
    Complex num1, num2;

    scanf("%lf %lf %lf %lf", &num1.real, &num1.img, &num2.real, &num2.img);
    printComplex(num1, num2);
    printAddComp(num1, num2);
    printMulComp(num1, num2);

    return 0;
}
