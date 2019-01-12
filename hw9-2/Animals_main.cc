#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "Animals.h"
using namespace std;

int main() {
    vector<Animal*> a;
    string command, name, ft;
    int info[2];
    int age, stripe;

    while (true) {
        getline(cin, command);
        if(command[0] == 'z') {
            char* cstr = new char[command.length()+1];
            strcpy(cstr, command.c_str());
            char* c = strtok(cstr, " ");
            int i = 0;
            while (c != 0) {
                if(i == 1){
                    name = c;
                }
                else {
                    info[i] = atoi(c);
                }
                c = strtok(NULL, " ");
                i++;
            }
            age = info[2];
            stripe = info[3];
            a.push_back(new Zebra(name, age, stripe));
        }
        if(command[0] == 'c') {
            char* cstr = new char[command.length()+1];
            strcpy(cstr, command.c_str());
            char* c = strtok(cstr, " ");
            int i = 0;
            while (c != 0) {
                if(i == 1) 
                    name = c;
                if(i == 2)
                    age = atoi(c);
                if(i == 3)
                    ft = c;
                c = strtok(NULL, " ");
                i++;
            }
            a.push_back(new Cat(name, age, ft));
        }
        if(command[0] == '0') {
            for(int i = 0; i < a.size(); i++) {
                a[i]->printInfo();
            }
            for(int i = 0; i < a.size(); i++) {
                delete a[i];
            }
            return 0;
        }
    }

    return 0;
}
