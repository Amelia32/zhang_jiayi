#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h,x;
   cout<<"请依次输入一个数：";
   cin>>a;
   x=fabs(a);
   cout<<"x=fabs(7.5)="<<x<<endl;
   
   cin>>b;
   x=floor(b);
   cout<<"x=floor(7.5)="<<x<<endl;
   
   cin>>c;
   x=fabs(c);
   cout<<"x=fabs(0.0)="<<x<<endl;
   
   cin>>d;
   x=ceil(d);
   cout<<"x=ceil(0.0)="<<x<<endl;
   
   cin>>e;
   x=fabs(e);
   cout<<"x=fabs(-6.4)="<<x<<endl;
  
  cin>>f;
  x=ceil(f);
  cout<<"x=ceil(-6.4)="<<x<<endl;
  
  
  cin>>g;
  cin>>h;
  x=ceil(-fabs(g+floor(h)));
  cout<<"x=ceil(-fabs(-8+floor(-5.5)))="<<x<<endl;
}
