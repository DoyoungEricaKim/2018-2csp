#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class IntegerSet {
    public:
        IntegerSet() {};
        ~IntegerSet() {};

        void AddNumber(int num);
        void SortNumber();
        void DeleteNumber(int num);
        int GetItem(int pos) const;
        std::vector<int> GetAll() const;

    private:
        std::vector<int> numbers_;
};
