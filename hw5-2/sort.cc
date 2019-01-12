#include <stdio.h>
#include "sort.h"

void sortInt(int *arr, int size){
    int temp;

    for (int i = 1; i < size; i++) {
        for (int j = 1; j <= size - i; j++) {
            if (arr[j-1] > arr[j]) {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

}
