#include <iostream>
#include "stock1.h"
using namespace std;

Stock::Stock()
{
    cout << "Default constructor called.\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string &co, long n, double pr)
{
    cout << "Constructor using" << co << " called\n";
    company = co;
    if (n < 0)
    {
        cout << "Number of shares can't be negative; "
             << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    cout << "Bye, " << company << "!\n";
}


void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negtive. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }   
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares sold can't be negtive. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    cout << "Company: " << company << endl
         << "Shares: " << shares << endl
         << "Share Price: $" << share_val << endl
         << "Total Worth: $" << total_val << endl;
}