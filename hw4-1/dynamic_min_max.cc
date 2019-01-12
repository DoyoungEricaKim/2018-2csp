#include <iostream>
using namespace std;

int main() {
    int num, min, max;
    
    cin >> num;
    int* arr = new int[num];

    min = arr[0];
    max = arr[0];

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}
