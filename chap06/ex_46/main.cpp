#include <iostream>
using namespace std;
double ceil(double x)
{
    int y;
        y=x+1;
        return y;
}
double fabs( double x)
{
   double y;
   if(x>=0)
   {
       y=x;
   }  
   else{
       y=-x;
   }
   return y;
}
int floor(double x)
{
    int y;
    y=x+1-1;
    return y;
}
double fmod(double x,double y)
{
    double z,h;
    int a,b;
    a=x*10;
    b=y*10;
    z=(b%a)/10;
    return z;
    
}
double power(double x,double y)
{
    double z;
    if(y==1)
        z=x;
    else
        z=x*power(x,y-1);
        return z;
}
int main()
{
    double a,b;
    cin>>a;
    cin>>b;
    cout<<"ceil(x)="<<ceil(a)<<endl;
    cout<<"fabs(x)="<<fabs(a)<<endl;
    cout<<"floor(x)="<<floor(a)<<endl;
    cout <<"fmod(x)="<<fmod(a,b)<<endl;
    cout<<"power(x)="<<power(a,b)<<endl;
}