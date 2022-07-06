#pragma once
#include <string>

class Brass
{
private:
	std::string m_fullName;
	long m_accountNum;
	double m_balance;
public:
	Brass(const std::string& fullName = "Nullbody", long accountNum = -1, double balance = 0.0);
	void deposit(double amount);
	virtual void withdraw(double amount);
	double balance() const;
	virtual void viewAccount() const;
	virtual ~Brass();
};

class BrassPlus : public Brass
{
private:
	double m_maxLoan;
	double m_rate;
	double m_owesBank;
public:
	BrassPlus(const std::string& fullName = "Nullbody", long accountNum = -1, double balance = 0.0,
		double maxLoan = 500, double rate = 0.11125);
	BrassPlus(const Brass& brass, double maxLoan = 500, double rate = 0.11125);
	virtual void viewAccount() const;
	virtual void withdraw(double amount);
	void resetMax(double maxLoan) { m_maxLoan = maxLoan; }
	void resetRate(double rate) { m_rate = rate; }
	void resetOwes() { m_owesBank = 0; }

};
