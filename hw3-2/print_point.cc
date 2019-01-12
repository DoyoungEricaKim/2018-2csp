#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* p) {
    Point p2;
    
    p2.xpos = 2*(p->xpos);
    p2.ypos = 2*(p->ypos);

    return p2;
}

void swapPoint(Point* p1, Point* p2) {
    Point temp;
    temp.xpos = p1->xpos;
    p1->xpos = p2->xpos;
    p2->xpos = temp.xpos;
    
    temp.ypos = p1->ypos;
    p1->ypos = p2->ypos;
    p2->ypos = temp.ypos;
}

int main(void) {
    Point p1, p2;
    Point* pp1,* pp2;

    pp1 = &p1;
    pp2 = &p2;
    
    scanf("%d %d", &p1.xpos, &p1.ypos);
    printf("Calling getScale2xPoint()\n");
    p2 = getScale2xPoint(pp1);
    printf("P1 : %d %d\n", p1.xpos, p1.ypos);
    printf("P2 : %d %d\n", p2.xpos, p2.ypos);
    printf("Calling swapPoint()\n");
    swapPoint(&p1, &p2);
    printf("P1: %d %d\n", p1.xpos, p1.ypos);
    printf("P2: %d %d\n", p2.xpos, p2.ypos);
    return 0;
}

