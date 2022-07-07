#include "AccABC.h"
#include <iostream>
using std::cout;
using std::endl;
using std::ios_base;
using std::string;

AccABC::Formatting AccABC::SetFormat() const
{
    Formatting f;
    f.flag = cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AccABC::restore(Formatting& f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}

AccABC::AccABC(const std::string& fullName, long accNum, double balance) : m_fullName(fullName), m_accNum(accNum), m_balance(balance)
{
}

void AccABC::deposit(double amount)
{
    if (amount < 0)
        cout << "Negative deposit is not allowed; "
        << "deposit is canceled.\n";
    else
        m_balance += amount;
}

void AccABC::withdraw(double amount)
{
    m_balance -= amount;
}

void Brass::withdraw(double amount)
{
    if (amount < 0)
        cout << "Withdraw amount must be positive; "
        << "Withdraw canceled.";
    else if (amount <= balance())
        AccABC::withdraw(amount);
    else
        cout << "Withdraw amount of $" << amount
        << "exceeds your banlance.\n"
        << "Withdraw canceled.\n";
}

void Brass::viewAcc() const
{
    Formatting f = SetFormat();
    cout << "Client: " << fullName() << endl
        << "Account Number: " << accNum() << endl
        << "Balance: $" << balance() << endl;
    restore(f);
}

BrassPlus::BrassPlus(const std::string& fullName, long accNum, double balance, double maxLoan, double rate) : AccABC(fullName, accNum, balance), m_maxLoan(maxLoan), m_rate(rate), m_owesBank(0.0)
{
}

BrassPlus::BrassPlus(const Brass& brass, double maxLoan, double rate) : AccABC(brass), m_maxLoan(maxLoan), m_rate(rate), m_owesBank(0.0)
{
}

void BrassPlus::viewAcc() const
{
    Formatting f = SetFormat();

    cout << "Client: " << fullName() << endl
        << "Account Number: " << accNum() << endl
        << "Balance: $" << balance() << endl;
    cout << "Maximun loan: %" << m_maxLoan << endl
        << "Owed to bank: $" << m_owesBank << endl;

    cout.precision(3);
    cout << "Loan Rate: " << 100 * m_rate << "%\n";
    restore(f);
}

void BrassPlus::withdraw(double amount)
{
    Formatting f = SetFormat();

    double bal = balance();
    if (amount < bal)
        AccABC::withdraw(amount);
    else if (amount <= bal + m_maxLoan - m_owesBank)
    {
        double advance = amount - bal;
        m_owesBank += advance * (1.0 + m_rate);

        cout << "Bank advance: $" << advance << endl
            << "Finace charge: $" << advance * m_rate << endl;
        deposit(advance);
        AccABC::withdraw(amount);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";

    restore(f);
}
