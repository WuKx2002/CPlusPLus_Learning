#include "Brass.h"
#include <iostream>
using std::cout;
using std::endl;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const std::string& fullName, long accountNum, double balance) 
	: m_fullName(fullName), m_accountNum(accountNum), m_balance(balance)
{
}

void Brass::deposit(double amount)
{
	if (amount < 0)
		cout << "Negative deposit is not allowed; "
		<< "deposit is canceled.\n";
	else
		m_balance += amount;
}

void Brass::withdraw(double amount)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amount < 0)
		cout << "Withdraw amount must be positive; "
		<< "Withdraw canceled.";
	else if (amount <= m_balance)
		m_balance -= amount;
	else
		cout << "Withdraw amount of $" << amount
		<< "exceeds your banlance.\n"
		<< "Withdraw canceled.\n";

	restore(initialState, prec);
}

double Brass::balance() const
{
	return m_balance;
}

void Brass::viewAccount() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	cout << "Client: " << m_fullName << endl
		<< "Account Number: " << m_accountNum << endl
		<< "Balance: $" << m_balance << endl;

	restore(initialState, prec);
}

Brass::~Brass()
{
}

format setFormat()
{
	return cout.setf(std::ios_base::fixed,
		std::ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}

BrassPlus::BrassPlus(const std::string& fullName, long accountNum,
	double balance, double maxLoan, double rate)
	: Brass(fullName, accountNum, balance), m_maxLoan(maxLoan), m_rate(rate), m_owesBank(0.0)
{
}

BrassPlus::BrassPlus(const Brass& brass, double maxLoan, double rate)
	: Brass(brass), m_maxLoan(maxLoan), m_rate(rate), m_owesBank(0.0)
{
}

void BrassPlus::viewAccount() const
{	
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::viewAccount();
	cout << "Maximun loan: %" << m_maxLoan << endl
		<< "Owed to bank: $" << m_owesBank << endl;

	cout.precision(3);
	cout << "Loan Rate: " << 100 * m_rate << "%\n";
	restore(initialState, prec);
}

void BrassPlus::withdraw(double amount)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = balance();
	if (amount < bal)
		Brass::withdraw(amount);
	else if (amount <= bal + m_maxLoan - m_owesBank)
	{
		double advance = amount - bal;
		m_owesBank += advance * (1.0 + m_rate);

		cout << "Bank advance: $" << advance << endl
			<< "Finace charge: $" << advance * m_rate << endl;
		deposit(advance);
		Brass::withdraw(amount);
	}
	else
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	restore(initialState, prec);
}
