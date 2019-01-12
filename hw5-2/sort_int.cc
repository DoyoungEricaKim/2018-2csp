#include <iostream>
#include "sort.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n < 1)
        return 0;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sortInt(arr, n);
    
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    
    cout << endl;

    delete[] arr;

    return 0;
}
