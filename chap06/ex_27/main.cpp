#include <iostream>
using namespace std;
double minimum(double x,double y,double z)
{
    double min=x;
    if(y<x)
    min=y;
    if(z<min)
        min=z;
   return min;
}
int main()
{
    double a,b,c;
   cout<<"Please enter three numbers:";
   cin>>a;
   cin>>b;
   cin>>c;
   cout<<"The smallest number:"<<minimum(a,b,c)<<endl;
}
