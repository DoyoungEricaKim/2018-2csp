#include <iostream>
#include "reply_admin.h"
#include <string>
using namespace std;


int main() {
    ReplyAdmin chat1;
    int i, j;
    char n, m;
    string input;
    bool check;
    
    while (true) {
        getline(cin, input);
        if (input.substr(0, 7) == "#remove") {
            if (input[9] == '-') {
                check = chat1.removeChat(input[8]-48, input[10]-48); 
                chat1.showAll();
            }
            if (input[9] == ',') {
                int count = 0;
                for (j = 0;;j++) {
                    count++;
                    if (input[8+2*j+1] == '\0') {
                        break;
                    }
                }
                int arri[count];
                for (j = 0; j < count; j++) {
                    arri[j] = input[8+2*j]-48;
                }
                check = chat1.removeChat(arri, count);
                chat1.showAll();
            }
            if (input[9] == '\0') {
                check = chat1.removeChat(input[8]-48);
                chat1.showAll();
            }
        }
        if (input.substr(0, 5) == "#quit")
            return 0;
        if (input.substr(0, 7) != "#remove" && input.substr(0, 5) != "#quit") {
            check = chat1.addChat(input);
            if (check == true)
                chat1.showAll();
            else
                cout << "Failure: No more lines can be added" << endl;
        }
    }
    return 0;
}
