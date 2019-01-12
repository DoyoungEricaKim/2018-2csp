#include <stdio.h>

int main() {
    char word[10];
    char temp[10];
    int i;

    scanf("%s", word);

    for(i=0;i<10;i++) {
        if(word[i]<90)
            temp[i] = word[i] + 32;
        if(word[i]>96)
            temp[i] = word[i] - 32;
    }
    printf("%s", temp);

    return 0;
}
