#include "time.h"

Time::Time(const int hr, const int min, const int sec)
{
    hour = 0, minuet = 0, second = 0;
    if (hr > 0 && hr < 60)
    {
        hour = hr;
    }
    if (min > 0 && min < 60)
    {
        minuet = min;
    }
    if (sec > 0 && sec < 60)
    {
        second = sec;
    }
}

//copy constructor
Time::Time(const Time &_time)
{
    hour = _time.hour;
    minuet = _time.minuet;
    second = _time.second;
}

//destructor
Time::~Time(){
    hour=0, minuet=0, second=0;
}

//setters
void Time::setHour(const int hr)
{
    if (hr > 0 && hr < 60)
    {
        hour = hr;
    }
}

void Time::setMinuet(const int min)
{
    if (min > 0 && min < 60)
    {
        minuet = min;
    }
}

void Time::setSecond(const int sec)
{
    if (sec > 0 && sec < 60)
    {
        second = sec;
    }
}

//getters
int Time::getHour()
{
    return hour;
}

int Time::getMinuet()
{
    return minuet;
}

int Time::getSecond()
{
    return second;
}

//print
void Time::print(){
    cout<<"\nTime is: "<<hour<<":"<<minuet<<":"<<second;
}