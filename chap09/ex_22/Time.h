#ifndef TIME_H
#define TIME_H

class Time
{
public:
   explicit Time(double=0.00,double=0.00,double=0.00);
    void setTime(double,double,double);
    void setHour(double);
    void setMinute(double);
    void setSecond(double);
    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const;
    
    void printUniversal()const;
    void printStandard()const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};

#endif // TIME_H
