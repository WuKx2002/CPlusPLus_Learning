#ifndef _MYTIME3_H_
#define _MYTIME3_H_

#include <iostream>

class Time
{
private:
    int m_hours;
    int m_minutes;
public:
    Time();
    Time(int hours, int minutes = 0);
    void AddMin(int minutes);
    void AddHr(int hours);
    void Reset(int hours = 0, int minutes = 0);
    friend Time operator*(double m, const Time &time);
    friend std::ostream & operator<<(std::ostream &os, const Time &time);
}; 

#endif
