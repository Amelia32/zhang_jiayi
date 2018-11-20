#include <iostream>
#include <math.h>
using namespace std;
double hypotenuse(double x,double y)
{
    double s=sqrt(x*x+y*y);
    return s;
}
int main()
{
    double a,b,c,d,e,f;
    cout<<"请输入第一个三角形的两边长：";
    cin>>a;
    cin>>b;
    cout<<"请输入第二个三角形的两边长：";
    cin>>c;
    cin>>d;
    cout<<"请输入第三个三角形的两边长：";
    cin>>e;
    cin>>f;
    cout<<"三角形\t边1\t边2\t斜边"<<endl;
    cout<<"1"<<"\t"<<a<<"\t"<<b<<"\t"<<hypotenuse(a,b)<<endl;
    cout<<"2"<<"\t"<<c<<"\t"<<d<<"\t"<<hypotenuse(c,d)<<endl;
    cout<<"3"<<"\t"<<e<<"\t"<<f<<"\t"<<hypotenuse(e,f)<<endl;
}
