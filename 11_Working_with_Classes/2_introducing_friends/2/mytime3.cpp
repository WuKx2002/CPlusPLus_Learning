#include "mytime3.h"
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

Time operator*(double m, const Time &time) 
{
	Time res;
	long totalminutes = time.m_hours * m * 60 + time.m_minutes * m;
	res.m_hours  = totalminutes / 60;
	res.m_minutes = totalminutes % 60;
	return res;
}

std::ostream & operator<<(std::ostream & os, const Time &time)
{
    os << time.m_hours << " hours, " << time.m_minutes << " minutes";
    return os;
}
