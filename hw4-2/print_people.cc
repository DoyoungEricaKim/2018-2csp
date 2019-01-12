#include <iostream>
using namespace std;

int main() {
    int num;
    typedef struct {
        string name;
        int age;
    } Person;
    
    cin >> num;
    Person *arr = new Person[num];
    
    for (int i = 0; i < num; i++) {
        cin >> arr[i].name >> arr[i].age;
    }
    for (int j = 0; j < num; j++ ) {
        cout << "Name:" << arr[j].name << ", Age:" << arr[j].age << endl;
    }

    delete[] arr;

    return 0;
}
