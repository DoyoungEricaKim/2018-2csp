#include <stdio.h>

typedef struct {
    char name[7];
    int score;
} Person;

void printScoreStars(Person* persons, int len) {
    int star, k;
    
    star = len/5;

    printf("%s ", persons->name);
    for (k=0;k<star;k++){
        printf("*");
    }
    printf("\n");
}

int main() {
    Person student[3];
    Person* pstudent[3];
    int i, j;

    for (i=0;i<3;i++) {
        scanf("%s %d", student[i].name, &student[i].score);
        pstudent[i] = &student[i];
    }
    
    for (j=0;j<3;j++) {
        printScoreStars(pstudent[j], student[j].score);
    }
   
    return 0;
}
