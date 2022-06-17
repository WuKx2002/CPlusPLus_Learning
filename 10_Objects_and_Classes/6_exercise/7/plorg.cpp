#include "plorg.h"

Plorg::Plorg(char name[], int CI)
{
    strcpy(m_name,name);
    m_CI = CI;
}

void Plorg::reset_ci(int n)
{
    m_CI = n;
}

void Plorg::print_info() const
{
    cout << "plorg name: " << m_name <<", CI = "<< m_CI << endl;
}
