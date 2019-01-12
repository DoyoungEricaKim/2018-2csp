#include <stdio.h>

struct Person{
    char name[10];
    int age;
};

int main() {
    struct Person man;
   
    scanf("%s %d", man.name, &man.age);

    printf("name: %s\n", man.name);
    printf("age: %d\n", man.age);
    
    return 0;
}
