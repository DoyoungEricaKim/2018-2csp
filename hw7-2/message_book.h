#pragma once
#include <string>
#include <vector>
#include <map>
using namespace std;

class MessageBook {
    public:
        MessageBook() {};
        ~MessageBook() {};
        void AddMessage(int number, const string& message);
        void DeleteMessage(int number);
        vector<int> GetNumbers() const;
        const string& GetMessage(int number) const;
        void PrintMessage(int number);

    private:
        map<int, string> messages_;
};
