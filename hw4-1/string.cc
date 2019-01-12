#include <iostream>
using namespace std;

int main() {
    string str1, str2, add;
    
    cin >> str1;
    cin >> str2;

    add = str1 + str2;
    
    cout << add << endl;
    cout << add[0] << endl;
    cout << add[add.length()-1] << endl;

    return 0;
}
