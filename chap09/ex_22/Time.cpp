#include "Time.h"
#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

Time::Time(double hour,double minute,double second)
{
    setTime(hour,minute,second)
    
}
void Time::setTime(double h,double m,double s)
{
    steHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(double h)
{
    if(h>=0&&h<24)
        hour=h;
        else
            throw invalid_argument("hour must be 0-23");
}
void Time::setMinute(double m)
{
    if(m>=0&&m<60)
        minute=m;
        else
            throw invalid_argument("mintue must be 0-59");
}
void Time::setSecond(double s)
{
    if(s>=0&&s<60)
        second=s;
        else
            throw invalid_argument("second must be 0_59");
}
unsigned double Time::getHour()const
{
    return hour;
}
unsigned double Time::getMinute()const
{
    return minute;
}
unsigned double Time::getSecond()const
{
    return double secon;
}
void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<;
}
void Time::printStandard()const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM");
}