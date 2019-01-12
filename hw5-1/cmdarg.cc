#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int check(char *input){
    if (atoi(input) == 0){
        return 0;
    }
    else{ 
        int temp=atoi(input);
        return temp;
    }
}

int main(int argc, char **argv){
    string str;
    int add = 0;

    for (int i = 1;i < argc; i++) {
        if (check(argv[i]) == 0){
            str += argv[i];
        }
        else{
            add += atoi(argv[i]);
        }
    }

    cout << str << endl;
    cout << add << endl;

    return 0;
}
