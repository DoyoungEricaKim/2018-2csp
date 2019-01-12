#include <stdio.h>

int main() {
    int num[5] = {0, 0, 0, 0, 0};
    int i, j=0, k=0,  min, max, sum=0;

    for(i=0;i<5;i++) {
        scanf("%d",&num[i]);
        sum += num[i];
    }


    min = num[0];
    while(j<5) {
        if(min>num[j]){
            min = num[j];
            j++;
        }
        else
            j++;
    }
    
    max = num[0];
    while(k<5) {
        if(max<num[k]){
            max = num[k];
            k++;
        }
        else
            k++;
    }
    
    
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    printf("sum: %d\n", sum);

    return 0;
}

