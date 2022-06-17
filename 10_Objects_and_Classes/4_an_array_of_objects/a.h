#ifndef _A_H_
#define _A_H_

#include <iostream>
#include <string>

class Scores
{
private:
    std::string m_name;
    int m_Chinese;
    int m_math;
    int m_English;
    int m_total;
    void sum() { m_total = m_Chinese + m_math + m_English; };
public:
    Scores();
    Scores(const std::string name, const int Chinese, const int math, const int English);
    ~Scores();
    void show() const;
    const Scores &topval(const Scores & s) const;
};

#endif