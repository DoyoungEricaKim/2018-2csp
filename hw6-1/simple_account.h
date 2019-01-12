#pragma once
#include <iostream>

class Admin {
    class Account {
        int id;
        int b = 0;
    };
    int numAccount = 0;
    Account acnt;

public:
    void newAccount(int i);
    void deposit(Account.id uid, int money);
    void withdrawal(Account.id uid, int money);
    void transfer(Account.id uid1, Account.id uid2, int money);
    void check(Account.id uid);
};
