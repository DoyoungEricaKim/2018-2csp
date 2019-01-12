#include <stdio.h>
#include <stdlib.h>

void rotateLeft(int* pa, int* pb, int* pc) {
    int ptemp;
    
    ptemp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = ptemp;

}

void rotateRight(int* pa, int* pb, int* pc) {
    int ptemp;

    ptemp = *pb;
    *pb = *pa;
    *pa = *pc;
    *pc = ptemp;

}

int main() {
    int a = 10, b = 20, c = 30;
    int enter;
    
    printf("%d:%d:%d\n", a, b, c);

    while(1) {
        scanf("%d", &enter);

        if (enter == 1) {
            rotateLeft(&a, &b, &c);
            printf("%d:%d:%d\n", a, b, c);
        }
        if (enter == 2) {
            rotateRight(&a, &b, &c); 
            printf("%d:%d:%d\n", a, b, c);
        }
        if (enter != 1 && enter != 2) {
            exit(1);
        }
    }
    return 0;   
}

