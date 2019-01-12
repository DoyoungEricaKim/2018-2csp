#pragma once
#include <vector>
using namespace std;

class SortedArray {
    public:
        SortedArray(){};
        ~SortedArray(){};

        void AddNumber(int num);
        void SortNumber();

        vector<int> GetSortedAscending();
        vector<int> GetSortedDescending();
        int GetMax();
        int GetMin();

    private:
        vector<int> numbers_;
};
