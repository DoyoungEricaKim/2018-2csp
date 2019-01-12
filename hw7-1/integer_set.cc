#include <iostream>
#include "integer_set.h"
using namespace std;

void IntegerSet::AddNumber(int num) {
    if(!(binary_search(numbers_.begin(), numbers_.end(), num))) {
        numbers_.push_back(num);
        SortNumber();
    }
}

void IntegerSet::SortNumber() {
    for(int i = 0; i < numbers_.size(); i++) {
        for(int j = 0; j < numbers_.size() - (i+1); j++) {
            if (numbers_[j] > numbers_[j+1]) {
                int tmp = numbers_[j+1];
                numbers_[j+1] = numbers_[j];
                numbers_[j] = tmp;
            }
        }
    }
}

void IntegerSet::DeleteNumber(int num) {
    if(binary_search(numbers_.begin(), numbers_.end(), num)) {
        int i = 0;
        for (i = 0; i < numbers_.size(); i++) {
            if(*(numbers_.begin() + i) == num)
                break;
        }
        numbers_.erase(numbers_.begin() + i);
    }
}

int IntegerSet::GetItem(int pos) const {
    if(numbers_.size() > pos && pos >= 0) {
        cout << numbers_[pos] << endl;
    }
    else
        cout << "-1" << endl;
}

vector<int> IntegerSet::GetAll() const {
    for(int i = 0; i < numbers_.size(); i++)
        cout << numbers_[i] << " ";
    cout << endl;
    return numbers_;
}

