#include <stdio.h>

struct Person {
    char name[10];
    int age;
};

int main() {
     Person arr[3];

    int i;

    for(i=0;i<3;i++) {
        scanf("%s %d",arr[i].name,&arr[i].age);
    }

    Person *p1 = &arr[0];
    Person *p2 = &arr[1];
    Person *p3 = &arr[2];

    printf("Name:%s, Age:%d\n", p1->name, p1->age);
    printf("Name:%s, Age:%d\n", p2->name, p2->age);
    printf("Name:%s, Age:%d\n", p3->name, p3->age);
    
    return 0;
}
