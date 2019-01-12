#include <iostream>
#include <string>
#include <cstring>
#include "reply_admin.h"
using namespace std;

int ReplyAdmin::getChatCount() {
    return chatNum;
}


bool ReplyAdmin::addChat(string _chat) {
    if(chatNum > 9){
        return false;
    }
    else { 
        *(chats+chatNum) = _chat;
        chatNum++;
        return true;
    }
}

void ReplyAdmin::showAll() {
    for (int i = 0; i < chatNum; i++)
        cout << i << " " << *(chats+i) << endl;
}

bool ReplyAdmin::removeChat(int _start, int _end) {
    int here = 0, len = 0;
    len = _end - _start + 1;
    for(int i = _start; i < _end + 1; i++) {
        *(chats+i) = '\0';
        chatNum--;
    }
    for (int j = 0; j < chatNum; j++) {
        if((*(chats+j))[0] != '\0') {
            here++;
        }
        else {
            break;
        }
    }
    for (int k = here; k < chatNum; k++) {
        *(chats+k) = *(chats+k+len);
    }
}

bool ReplyAdmin::removeChat(int _index) {
    int here = 0;
    *(chats+_index) = '\0';
    chatNum--;
    for (int j = 0; j < chatNum; j++) {
        if((*(chats+j))[0] != '\0') {
            here++;
        }
        else {
            break;
        }
    }
    for (int i = here; i < chatNum; i++) {
        *(chats+i) = *(chats+i+1);
    }
}

bool ReplyAdmin::removeChat(int* _indices, int _count) {
    int j = 0;
    for (int i = 0; i < _count; i++) {    
        removeChat(_indices[i]-j);
        j++;
    }
}
