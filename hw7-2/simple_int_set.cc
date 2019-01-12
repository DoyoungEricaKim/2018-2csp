#include <iostream>
#include <set>
#include <string>
#include <cstring>
#include <cctype>
#include "simple_int_set.h"
using namespace std;

set<int> StrtoSet(string str) {
    set<int> s;
    size_t found = str.find("}");
    string nstr = str.substr(2, found-3);
    char* cstr = new char [nstr.length() + 1];
    strcpy(cstr, nstr.c_str());
    char* p = strtok(cstr, " ");
    while (p != NULL) {
        int num = atoi(p);
        s.insert(num);
        p = strtok(NULL, " ");
    }
    delete[] cstr;
    return s;
}

set<int> SetIntersection(const set<int>& set0, const set<int>& set1) {
    set<int> set2;
    set2.insert(set0.begin(), set0.end());
    set2.insert(set1.begin(), set1.end());
    return set2;
}


set<int> SetUnion(const set<int>& set0, const set<int>& set1) {
    set<int> set2;
    set<int>::iterator it1, it2;
    set2.insert(set0.begin(), set0.end());
    for(it1 = set0.begin(); it1 != set0.end(); ++it1) {
        for(it2 = set1.begin(); it2 != set1.end(); ++it2) {
            if(*(it1) == *(it2)) { 
                set2.erase(*(it1));
            }
        }
    }
    return set2;
}

set<int> SetDifference(const set<int>& set0, const set<int>& set1) {
    set<int> set2;
    set<int>::iterator it1, it2;
    for(it1 = set0.begin(); it1 != set0.end(); ++it1) {
        for(it2 = set1.begin(); it2 != set1.end(); ++it2) {
            if(*(it1) == *(it2)) {
                set2.insert(*(it1));
            }
        }
    }
    return set2;
}

