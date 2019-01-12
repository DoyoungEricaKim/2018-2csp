#include <iostream>
#include "world_clock.h"
#include <string>
using namespace std;

void WorldClock::Tick(int seconds) {
    _second += seconds;
}

int WorldClock::hour() const {
    int hour;
    if(_second < 0) {
        hour = (_second*(-1)) / 3600;
        return 23 - hour;
    }
    else {
        hour = _second / 3600;
        return hour;
    }
}

int WorldClock::minute() const {
    int hour, minute;
    if(_second >= 0) {
        hour = _second / 3600;
        minute = (_second - (3600*hour)) / 60;
        return minute;
    }
    else {
        hour = ((_second*(-1)) / 3600);
        minute = ((_second*(-1)) - (3600*hour)) / 60;
        return 59 - minute;
    }
}

int WorldClock::second() const {
    int hour, minute, second;
    if(_second >= 0) {
        hour = _second / 3600;
        minute = (_second - (3600*hour)) / 60;
        second = _second - (hour*3600 + minute*60);
        return second;
    }
    else {
        hour = (_second*(-1)) / 3600;
        minute = ((_second*(-1)) - (3600*hour)) / 60;
        second = _second*(-1) - (hour*3600 + minute*60);
        return 60 - second;
    }
}

bool WorldClock::SetTime(int hour, int minute, int second) {
    if(hour >= 0 && hour < 25 && minute >=0 && minute < 60 && second >= 0 && second < 60) {
        _second = 3600*hour + 60*minute + second;
        return true;
    }
    else{
        return false;
    }
}

ostream& operator << (ostream& os, const WorldClock& c){
    os << c.hour() << ":" << c.minute() << ":" << c.second() << endl;
    return os;
}

istream& operator >> (istream& is, WorldClock& c) {
    int second;
    string hour, minute;
    getline(is, hour, ':');
    getline(is, minute, ':');
    is >> second;
    if(c.SetTime(stoi(hour), stoi(minute), second)) {
        
        cout << c;
    }
    else {
        cout << "Invalid time:" << hour << ":" << minute << ":"<< second << endl;
    }    
    return is;
}
