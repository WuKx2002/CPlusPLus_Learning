#include "mytime1.h"
#include <iostream>

Time::Time()
{
    m_hours = m_minutes = 0;
}

Time::Time(int hours, int minutes)
{
    m_hours = hours;
    m_minutes = minutes;
}

void Time::AddMin(int minutes) 
{
    m_minutes += minutes;
    m_hours += minutes / 60;
    m_minutes %= 60;
}

void Time::AddHr(int hours) 
{
    m_hours += hours;   
}

void Time::Reset(int hours, int minutes) 
{
    m_hours = hours;
    m_minutes = minutes;    
}

Time Time::operator+(const Time &time) const 
{
    Time sum;
    sum.m_minutes = m_minutes + time.m_minutes;
    sum.m_hours = m_hours + time.m_minutes / 60;
    sum.m_minutes %= 60;
    return sum;    
}

void Time::Show() const 
{
    std::cout << m_hours << " hours, " << m_minutes << " minutes";   
}