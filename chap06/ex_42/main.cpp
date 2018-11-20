#include <iostream>
#include<math.h>
using namespace std;
double distance(double x,double y,double z,double h)
{
     int l=sqrt((x-z)*(x-z)+(y-h)*(y-h));
     return l;
}
int main()
{
    int a,b,c,d;
    cout<<"输入一一个点的坐标x,y:";
    cin>>a;
    cin>>b;
    cout<<"请输入第二个点的坐标x,y:";
    cin>>c;
    cin>>d;
    cout<<"两点间的距离为："<<distance(a,b,c,d)<<endl;
}