#include <stdio.h>
typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    char name[7];
    Point points[3];
} Person;

int scanP(Person *stu){
    double cmp;
    int i, j=0;

    scanf("%s %lf %lf %lf %lf %lf %lf", stu->name, &stu->points[0].x, &stu->points[0].y, &stu->points[1].x, &stu->points[1].y, &stu->points[2].x, &stu->points[2].y);
    cmp = (stu->points[0].x - 0)*(stu->points[0].x - 0) + (stu->points[0].y - 0)*(stu->points[0].y - 0);    
    
    for (i=0;i<3;i++) {
        if (cmp <= (stu->points[i].x - 0)*(stu->points[i].x - 0) + (stu->points[i].y - 0)*(stu->points[i].y - 0)) {
            cmp = (stu->points[i].x - 0)*(stu->points[i].x - 0) + (stu->points[i].y - 0)*(stu->points[i].y - 0);
            j = i;        
        }
    }
    return j;
}

void printP(int i, Person stu){
    printf("%s (%.lf, %.lf)\n", stu.name, stu.points[i].x, stu.points[i].y);
}

int main() {
    Person stu1, stu2, stu3;
    int a, b, c;

    a = scanP(&stu1);
    b = scanP(&stu2);
    c = scanP(&stu3);
    printP(a, stu1);
    printP(b, stu2);
    printP(c, stu3);

    return 0;  
}

