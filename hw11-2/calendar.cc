#include <iostream>
#include "calendar.h"
#include <string>
using namespace std;

Date::Date() {
}

Date::Date(int year, int month, int day) {
}

void Date::NextDay(int n) {
    day_ += n;
    int year = year_;
    int month = month_;
    int day = day_;
    while(!SetDate(year, month, day)) {
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) {
            if(day >=32) {
                month++;
                day = day - 31;
            }
            else if(day < 1) {
                if(month==3) {
                    month--;
                    if(GetDaysInYear(year) == 365) {
                        day = 28 + day;
                    }
                    else {
                        day = 29 + day;
                    }
                }
                else if(month==1) {
                    year--;
                    month = 13;
                    month--;
                    day = 31 + day;
                }
                else {
                    month--;
                    day = 30 + day;
                }
            }
        }
        else if(month==2) {
            if(GetDaysInYear(year) == 366) {
                if(day >= 30) {
                    month++;
                    day = day - 29;
                }
                else if(day < 1) {
                    month--;
                    day = 31 + day;
                }
            }
            else {
                if(day >= 29) {
                    month++;
                    day = day -28;
                }
                else if(day < 1) {
                    month--;
                    day = 30 + day;
                }
            }
        }
        else {
            if(day >=31) {
                month++;
                day = day - 30;
            }
            else if(day_ < 1) {
                month--;
                day = 31 + day;
            }
        }

        if(month > 12) {
            year++;
            month = month - 12;
        }
        if(month < 1) {
            year--;
            month = 12 + month;
        }
        year_ = year;
        month_ = month;
        day_ = day;
    }
}
int Date::year() const {
    return year_;
}

int Date::month() const {
    return month_;
}

int Date::day() const {
    return day_;
}

bool Date::SetDate(int year, int month, int day) {
    if(month > 0 && month < 13 && day > 0 && day < 32) {
        if(GetDaysInYear(year) == 365) {
            if(month == 2 && day >= 29) {
                return false;
            }
            else {
                year_ = year;
                month_ = month;
                day_ = day;
                return true;
            }
        }
        else if(GetDaysInYear(year) == 366) {
            if(month == 2 && day >=30) {
                return false;
            }
            else {
                year_ = year;
                month_ = month;
                day_ = day;
                return true;
            }
        }
        else if(GetDaysInYear(year) >= ComputeDaysFromYearStart(year, month, day)) {
            year_ = year;
            month_ = month;
            day_ = day;
            return true;
        }
    }
    else {
        return false;
    } 
}

int Date::GetDaysInYear(int year) {
    int leap = 366;
    int non = 365;
    if(year % 4 != 0) {
        return non;
    }
    else {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return leap;
            }
            else {
                return non;
            }
        }
        else {
            return leap;
        }
    }
}

int Date::ComputeDaysFromYearStart(int year, int month, int day) {
    int count = 1;
    for(int i = 1; i <= month; i++) {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) {
            for(int j = 1; j <= 31; j++) {
                if(month == i && day == j) {
                    return count;
                }
                else{
                    count++;
                }
            }
        }
        else if(i==2) {
            if(GetDaysInYear(year) == 365) {
                for(int j = 1; j <=28; j++) {
                    if(month == i && day == j) {
                        return count;
                    }
                    else {
                        count++;
                    }
                }
            }
            else {
                for(int j = 1; j <=29; j++) {
                    if(month == i && day == j) {
                        return count;
                    }
                    else {
                        count++;
                    }
                }
            }
        }
        else {
            for(int j = 1; j <= 30; j++) {
                if(month == i && day == j) {
                    return count;
                }
                else{
                    count++;
                }
            }
        }
    }
    return count;
}

ostream& operator<<(ostream& os, const Date& c){
    os << c.year() << "." << c.month() << "." << c.day() << endl;
    return os;
}

istream& operator>>(istream& is, Date& c){
    string year, month, day;
    getline(is, year, '.');
    getline(is, month, '.');
    is >> day;
    if(c.SetDate(stoi(year), stoi(month), stoi(day))) {
        cout << c;
    }
    else {
        cout << "Invalid date:" << year << "." << month << "." << day << endl;
    }
    return is;
}
