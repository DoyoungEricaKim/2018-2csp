#include <iostream>
#include "simple_account.h"
using namespace std;

void Admin::newAccount(int i) {
    if (numAccount <= 10) { 
        numAccount += 1;
        acnt[numAccount-1]->id = numAccount;
        acnt[numAccount-1]->b = 0;
     }
}

void Admin::check(Account.id uid) {
    cout << "Balance of user " << uid << " : " << (acnt+uid)->b << endl;
}

void Admin::deposit(Account.id uid, int money) {
    if ((acnt_uid)->b += money <= 1000000) {
        (acnt+uid)->b += money;
        cout << "Success: Deposit to user " << uid << " " << money << endl;
    }
    else
        cout << "Failure: Deposit to user " << uid << " " << money << endl;
    check(uid);
}

void Admin::withdrawal(Account.id uid, int money) {
    if ((acnt+uid)->b -= money >= 0) {
        (acnt+uid)->b -= money;
        cout << "Success: Withdrawal from user " << uid << " " << money << endl;
    }
    else
       cout << "Failure: Withdrawal from user " << uid << " " << money << endl; 
    check(uid);
}

void Admin::transfer(Account.id uid1, Account.id uid2, int money) {
    if ((acnt+uid1)->b - money >= 0 && (acnt+uid2) + money <= 1000000){ 
        (acnt+uid1)->b - money;
        (acnt+uid2)->b + money;
        cout << "Success: Transfer from user " << uid1 << " to user " << uid2 << " " << money;
    }
    else
        cout << "Failure: Transfer from user " << uid1 << " to user " << uid2 << " " << money;
    check(uid1);
    check(uid2);
}
