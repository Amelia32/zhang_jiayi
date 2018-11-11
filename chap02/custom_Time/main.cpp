#include <iostream>
 using namespace std;
 class Time
 {
 private:
    int year,month,day,hour,minute,second;
 public:
    Time(int,int,int,int,int,int);
    void Run();
    bool IsLeap(int);
    void Display();
 };
 Time::Time(int Y,int MO,int D,int H,int MI,int S)
 {year=Y;month=MO;day=D;hour=H;minute=MI;second=S;}
 bool Time::IsLeap(int Y)
 {
    if(Y%4==0&&Y%100!=0||Y%400==0)
        return true;
    return false;
 }zsww
 void Time::Run()
 {
     second++;
     if(second==60)
     {
        second=0;
        minute++;
        if(minute==60)
        {
           minute=0;
           hour++;
           if(hour==24)
           {
              hour=0;
              day++;
              if(IsLeap(year)&&month==2&&day==28){month=3;day=0;}
              else if(!IsLeap(year)&&month==2&&day==29){month=3;day=0;}
              else if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day==31)
                   {month++;day=0;}
              else if((month==4||month==6||month==9||month==11)&&day==30)
                   {month++;day=0;}
              if(month==12){year++;month=1;}
           }             
        }
     }
 }
 void Time::Display()
 {cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;}
