#ifndef _MYTIME0_H_
#define _MYTIME0_H_

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
    Time Sum(const Time &time) const;
    void Show() const;
}; 

#endif