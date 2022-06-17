#ifndef _PLORG_H_
#define _PLORG_H_

#include <iostream>
#include <cstring>
using namespace std;

class Plorg
{
private:
    char m_name[19];
    int m_CI;
public:
    Plorg(char name[] = "Plorga", int CI = 50);
    void reset_ci(int n);
    void print_info() const;
};


#endif
