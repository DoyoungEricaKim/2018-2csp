#pragma once
#include <iostream>
#include <string>
#define NUM_OF_CHAT 10
using namespace std;

class ReplyAdmin {
    string* chats;
    int chatNum;
    
public:
    ReplyAdmin() { chats = new string[NUM_OF_CHAT]; chatNum = 0; }
    ~ReplyAdmin() { delete[] chats; }
    int getChatCount();
    bool addChat(string _chat);
    bool removeChat(int _index);
    bool removeChat(int* _indices, int _count);
    bool removeChat(int _start, int _end);
    void showAll();   

};
