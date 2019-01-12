#include <iostream>
#include <cstring>
#include <string>
#include "draw_shape.h"
using namespace std;

int main() {
    string command, scanvas, ncommand;
    char shape;
    int i = 0, icanvas[2], nums[3];
    
    getline(cin, scanvas);
    char* cstr = new char[scanvas.length()+1];
    strcpy(cstr, scanvas.c_str());
    char* p = strtok(cstr, " ");
    while (p != 0) {
        icanvas[i] = atoi(p);
        p = strtok(NULL, " ");
        i++;
    }
    delete cstr;
    int canvasx = icanvas[0];
    int canvasy = icanvas[1];
    
    while(true) {
        getline(cin, command);
        if(command.substr(0, 4) == "rect") {
            ncommand = command.substr(5);
            char* cstr1 = new char[ncommand.length()+1];
            strcpy(cstr1, ncommand.c_str());
            char* c = strtok(cstr1, " ");
            int j = 0;
            while (c != 0) {
                if(j < 4) {
                    nums[j] = atoi(c);
                }
                else
                    shape = *c;
                c = strtok(NULL, " ");
                j++;
            }
            delete[] cstr1;
            int x = nums[0];
            int y = nums[1];
            int height = nums[2];
            int width = nums[3];
            Rectangle r(width, height);
            r.Print();
            r.Draw(canvasx, canvasy, x, y, height, width, shape); 
        }
        if(command.substr(0, 4) == "diam") {
           ncommand = command.substr(8);
           char* cstr1 = new char[ncommand.length()+1];
           strcpy(cstr1, ncommand.c_str());
           char* c = strtok(cstr1, " ");
           int j = 0;
           while ( c != 0) {
               if(j < 3) {
                   nums[j] = atoi(c);
               }
               else
                   shape = *c;
               c = strtok(NULL, " ");
               j++;
           }
           delete[] cstr1;
           int x = nums[0];
           int y = nums[1];
           int l = nums[2];

           Diamond d((2*l)+1, (2*l)+1);
           d.Print();
           d.Draw(canvasx, canvasy, x, y, l, shape);
        }
        if(command.substr(0, 4) == "squa") {
            ncommand = command.substr(7);
            char* cstr1 = new char[ncommand.length()+1];
            strcpy(cstr1, ncommand.c_str());
            char* c = strtok(cstr1, " ");
            int j = 0;
            while (c != 0) {
                if(j < 3) {
                    nums[j] = atoi(c);
                }
                else
                    shape = *c;
                c = strtok(NULL, " ");
                j++;
            }
            delete[] cstr1;
            int x = nums[0];
            int y = nums[1];
            int l = nums[2];
            
            Square s(l, l);
            s.Print();
            s.Draw(canvasx, canvasy, x, y, l, shape);
        }
        if(command.substr(0, 4) == "quit") {
            return 0;
        }
    }
    return 0;
}
