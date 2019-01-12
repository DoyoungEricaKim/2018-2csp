#include <stdio.h>

int main() {
    int arr[3][2];
    int i, j, sum1 = 0, sum2 = 0;

    scanf("%d %d %d %d %d %d", &arr[0][0], &arr[0][1], &arr[1][0], &arr[1][1], &arr[2][0], &arr[2][1]);
    for (i=0;i<3;i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }

    for (j=0;j<3;j++) {
        sum1 += arr[j][0];
        sum2 += arr[j][1];
    }
    printf("1번째 열의 숫자의 합: %d\n", sum1);
    printf("2번째 열의 숫자의 합: %d\n", sum2);

    return 0;
}

