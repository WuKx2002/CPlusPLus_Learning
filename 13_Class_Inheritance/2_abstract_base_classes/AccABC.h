#pragma once
#include <iostream>
#include <string>

class AccABC
{
private:
	std::string m_fullName;
	long m_accNum;
	double m_balance;
protected:
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const std::string& fullName() const { return m_fullName; }
	long accNum() const { return m_accNum; }
	Formatting SetFormat() const;
	void restore(Formatting& f) const;
public:
	AccABC(const std::string& fullName = "Nullbody", long accNum = -1, double balance = 0.0);
	void deposit(double amount);
	virtual void withdraw(double amount) = 0;
	double balance() const { return m_balance; }
	virtual void viewAcc() const = 0;
	virtual ~AccABC() {}
};

class Brass : public AccABC
{
public:
	Brass(const std::string& fullName = "Nullbody", long accNum = -1, double balance = 0.0) : AccABC(fullName, accNum, balance) { }
	virtual void withdraw(double amount);
	virtual void viewAcc() const;
	virtual ~Brass() {}
};

class BrassPlus : public AccABC
{
private:
	double m_maxLoan;
	double m_rate;
	double m_owesBank;
public:
	BrassPlus(const std::string& fullName = "Nullbody", long accNum = -1, double balance = 0.0,
		double maxLoan = 500, double rate = 0.11125);
	BrassPlus(const Brass& brass, double maxLoan = 500, double rate = 0.11125);
	virtual void viewAcc() const;
	virtual void withdraw(double amount);
	void resetMax(double maxLoan) { m_maxLoan = maxLoan; }
	void resetRate(double rate) { m_rate = rate; }
	void resetOwes() { m_owesBank = 0; }
};
