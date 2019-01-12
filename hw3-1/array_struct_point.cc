#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

void scale2x(Point* pp) {
    pp->xpos *= 2;
    pp->ypos *= 2;
}

int main() {
    Point arr[3];
    int i;
         
    for(i=0;i<3;i++) {
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
    }

    Point *p1 = &arr[0];
    Point *p2 = &arr[1];
    Point *p3 = &arr[2];

    scale2x(p1);
    scale2x(p2);
    scale2x(p3);

    printf("[%d] %d %d\n", 0, arr[0].xpos, arr[0].ypos);
    printf("[%d] %d %d\n", 1, arr[1].xpos, arr[1].ypos);
    printf("[%d] %d %d\n", 2, arr[2].xpos, arr[2].ypos);

    return 0;
}

