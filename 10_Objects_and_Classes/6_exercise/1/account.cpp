#include "account.h"

Account::Account(string name, string account, ulong balance)
{
    m_name = name;
    m_account = account;
    m_balance = balance;
}

void Account::show()
{
    cout << "Name: " << m_name << endl
         << "account: " << m_account << endl
         << "Balance: " << m_balance << endl << endl;
}

void Account::deposit(ulong num)
{
    m_balance += num;
}

void Account::withdraw(ulong num)
{
    m_balance -= num;
}
