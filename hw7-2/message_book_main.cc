#include <iostream>
#include "message_book.h"
#include <vector>
#include <map>
#include <string>
#include <cstring>
using namespace std;

int main() {
    MessageBook book;
    string input, command, mes, num, showm;
    int numb, space;
    vector<int> nums;
    vector<int>::iterator iter;

    while (true) {
        getline(cin, input);
        command = input.substr(0, 4);
        if(command == "add ") {
            for(int i = 5; input[i] != '\0'; i++) {
                if(input[i] == ' ') {
                    space = i;
                    break;
                }
            }
            num = input.substr(4, space - 4);
            numb = stoi(num);
            mes = input.substr(space + 1);
            book.AddMessage(numb, mes);
        }
        if(command == "dele") {
            num = input.substr(7);
            numb = stoi(num);
            book.DeleteMessage(numb);
        }
        
        if(command == "prin") {
            num = input.substr(6);
            numb = stoi(num);
            book.PrintMessage(numb);
        }
        
        if(command == "list") {
            nums = book.GetNumbers();
            for(iter = nums.begin(); iter != nums.end(); iter++) {
                showm = book.GetMessage(*iter);
                cout << *iter << ": " << showm << endl;
            }
        }
        
        if(command == "quit")
            return 0;
    }
    return 0;
}
