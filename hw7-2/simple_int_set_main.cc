#include <iostream>
#include "simple_int_set.h"
#include <string>
#include <set>
using namespace std;

int main() {
    string input, input2, ninput;
    set<int> s, s2, si, su, sd;
    size_t pos1, pos2, pos3;
    set<int>::iterator iter;

    while(true) {
        getline(cin, input);
        if (input[0] == '0')
            return 0;
            
        else{
            s = StrtoSet(input);
            pos1 = input.find("+");
            pos2 = input.find("} - {");
            pos3 = input.find("*");
            
            if (pos1 != string::npos) {
                input2 = input.substr(pos1); 
                string ninput2 = input2.substr(2, input2.size() - 2);
                s2 = StrtoSet(ninput2);
                si = SetIntersection(s, s2);
                cout << "{ ";
                for(iter = si.begin(); iter != si.end(); iter++)
                    cout << *iter << " ";
                cout << "} " << endl;
            }
        
            if (pos2 != string::npos) {
                input2 = input.substr(pos2);
                string ninput2 = input2.substr(2, input2.size() - 2);
                s2 = StrtoSet(ninput2);
                su = SetUnion(s, s2);
                cout << "{ ";
                for(iter = su.begin(); iter != su.end(); iter++)
                    cout << *iter << " ";
                cout << "} " << endl;
            }

            if (pos3 != string::npos) {
                input2 = input.substr(pos3);
                string ninput2 = input2.substr(2, input2.size() - 2);
                s2 = StrtoSet(ninput2);
                sd = SetDifference(s, s2);
                cout << "{ ";
                for(iter = sd.begin(); iter != sd.end(); iter++)
                    cout << *iter << " ";
                cout << "} " << endl;
            }
            
        }
    }

    return 0;
}
