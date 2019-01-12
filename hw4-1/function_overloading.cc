#include <iostream>
using namespace std;

int add(int a, int b) {
    int c;
    c = a + b;

    return c;
}

string add(string a, string b){
    string new_string;
    new_string = a +"-" + b;
    
    return new_string;
}

int main() {
    int n1, n2;
    string s1, s2;
    
    cin >> n1 >> n2 >> s1 >> s2;
    cout << add(n1, n2) << endl;
    cout << add(s1, s2) << endl;

    return 0;
}
