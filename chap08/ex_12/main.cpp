#include<iostream>
#include <iomanip>
#include<string>
#include<time.h>
using namespace std;

int Rand();//产生随机数
int tPosition(int,int&);//计算乌龟所跑路程
int hPosition(int,int&);//计算兔子所跑路程
int main()
{
 int a=0, tPos=1, hPos=1;//存放循环次数、乌龟和兔子当前所跑路程
 string b="----------------------------------------------------------------------";

 cout<<" BANG  !!!!!"<<endl;
 cout<<" AND THEY' RE OFF  !!!!!"<<endl;//比赛开始
 while(true)
 {
  int Num=Rand();//获得随机数
  int Tpos=tPosition(Num,tPos);//获得乌龟当前路程
  int Hpos=hPosition(Num,hPos);//获得兔子当前路程
  a++;
  cout<<"This is the "<<a<<"th seconds:"<<endl;//计时
  cout<<setw(70)<<b<<endl;//跑道
  if(Tpos==Hpos)
  {
   cout<<setw(Tpos)<<"OUCH!!!"<<endl;//兔子和乌龟所跑路程相等，乌龟咬兔子
  }
  else
  {
   cout<<setw(Tpos)<<"T"<<endl;//显示乌龟当前位置
      cout<<setw(Hpos)<<"H"<<endl;//显示兔子当前位置
  }
  cout<<setw(70)<<b<<endl;//跑道
  if(Tpos==70)
  {
   cout<<"TORTOISE WINS!!!YAY!!!"<<endl;//乌龟获胜
   break;
  } 
  else if(Hpos==70)
  {
   cout<<"Hare wins．Yush!!!"<<endl;//兔子获胜
   break;
  }
  else if(Tpos==70&&Hpos==70)
  {
   cout<<"It's a tie!!!"<<endl;//平局
   break;
  }
 }
 cin>>a;//暂停屏幕，查看结果
 return 0;
}

int Rand()
{
 int num;
 srand(time(0));//一时间作为随机种子
 num=1+rand()%10;//得到1-10的随机数
 return num;
}

int tPosition(int Rand,int &Pos)
{
 if(1<=Rand&&Rand<=5)//乌龟百分之五十的时间快走
 {
  Pos+=3;
  if(Pos>=70)
   Pos=70;
 }
 else if(6<=Rand&&Rand<=7)//乌龟百分之二十的时间跌跤
 {
  Pos-=6;
  if(Pos<=0)
   Pos=1;
 }
 else//乌龟百分之三十的时间慢走
 {
  Pos++;
  if(Pos>=70)
   Pos=70;
 }
 return Pos;
}

int hPosition(int Rand,int &Pos)
{
 if(1<=Rand&&Rand<=2)//兔子百分之二十的时间睡觉
 {
  Pos=Pos;
 }
 else if(3<=Rand&&Rand<=4)//兔子百分之二十的时间大跳
 {
  Pos+=9;
  if(Pos>=70)
   Pos=70;
 }
 else if(Rand==5)//兔子百分之十的时间大跌
 {
  Pos-=12;
  if(Pos<=0)
   Pos=1;
 }
 else if(6<=Rand&&Rand<=8)//兔子百分之三十的时间小跳
 {
  Pos++;
  if(Pos>=70)
   Pos=70;
 }
 else//兔子百分之二十的时间小跌
 {
  Pos-=2;
  if(Pos<=0)
   Pos=1;
 }
 return Pos;
}
