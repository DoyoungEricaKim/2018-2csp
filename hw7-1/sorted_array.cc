#include <iostream>
#include "sorted_array.h"
#include <vector>
#include <algorithm>
using namespace std;

void SortedArray::AddNumber(int num) {
    numbers_.push_back(num);
    SortNumber();
}

void SortedArray::SortNumber() {
    for(int i = 0; i < numbers_.size(); i++) {
        for(int j = 0; j < numbers_.size() - (i+1); j++) {
            if(numbers_[j] > numbers_[j+1]) {
                int tmp = numbers_[j+1];
                numbers_[j+1] = numbers_[j];
                numbers_[j] = tmp;
            }
        }
    }
}

vector<int> SortedArray::GetSortedAscending() {
    for(int j = 0; j < numbers_.size(); j++)
        cout << numbers_[j] << " ";
    cout << endl;
    return numbers_;
}

vector<int> SortedArray::GetSortedDescending() {
    sort(numbers_.rbegin(), numbers_.rend());
    for(int j = 0; j < numbers_.size(); j++)
        cout << numbers_[j] << " ";
    cout << endl;
    return numbers_;
}

int SortedArray::GetMax() {
    cout << *max_element(numbers_.begin(), numbers_.end()) << endl;
}

int SortedArray::GetMin() {
    cout << *min_element(numbers_.begin(), numbers_.end()) << endl;
}

