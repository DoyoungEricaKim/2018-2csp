#pragma once
#include <set>
#include <string>
using namespace std;

set<int> StrtoSet(string str);
set<int> SetIntersection(const set<int>& set0, const set<int>& set1);
set<int> SetUnion(const set<int>& set0, const set<int>& set1);
set<int> SetDifference(const set<int>& set0, const set<int>& set1);

