#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

using namespace std;

typedef unsigned long ulong;

class Account
{
private:
    string m_name;
    string m_account;
    ulong m_balance;
public:
    Account(string name, string account, ulong balance);
    void show();
    void deposit(ulong num);
    void withdraw(ulong num);
};

#endif
