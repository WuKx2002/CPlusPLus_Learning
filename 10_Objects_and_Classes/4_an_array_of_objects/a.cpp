#include "a.h"

Scores::Scores()
{
    std::cout << "You haven't input all grades.\n";
    m_Chinese = m_math = m_English = 0;
}

Scores::Scores(const std::string name, const int Chinese, const int math, const int English)
{
    m_name = name;
    m_Chinese = Chinese;
    m_math = math;
    m_English = English;
    sum();
}

Scores::~Scores()
{
    //std::cout << "Bye!\n";
}

void Scores::show() const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << m_name << endl
         << "Chinese: " << m_Chinese << endl
         << "Math: " << m_math << endl
         << "English: " << m_English << endl
         << "Total: " << m_total << endl << endl;
}

const Scores & Scores::topval(const Scores & s) const
{
    if (s.m_total > m_total)
        return s;
    else
        return *this;
}
