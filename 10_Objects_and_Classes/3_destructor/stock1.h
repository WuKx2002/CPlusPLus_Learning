#ifndef _STOCK00_H_
#define _STOCK00_H_

#include <string>
using namespace std;

class Stock
{
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}    //inline
public:
    Stock();
    Stock(const string &co, long n, double pr);
    ~Stock();   //the only way to declare a destructor 
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
};

#endif