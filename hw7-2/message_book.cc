#include <iostream>
#include "message_book.h"
#include <string>
#include <vector>
#include <map>
using namespace std;

void MessageBook::AddMessage(int number, const string& message) {
    messages_.insert(make_pair(number, message));
}

void MessageBook::DeleteMessage(int number) {
    messages_.erase(number);
}

void MessageBook::PrintMessage(int number) {
    if(messages_.find(number) == messages_.end())
        cout << " " << endl;
    else
        cout << messages_.at(number) << endl;
}

vector<int> MessageBook::GetNumbers() const {
    vector<int> nums;
    map<int, string>::const_iterator it;
    for(it = messages_.begin(); it != messages_.end(); it++) {
        nums.push_back(it->first);
    }
    return nums;
}


const string& MessageBook::GetMessage(int number) const {
    const string& message = messages_.at(number);
    return message;
}

