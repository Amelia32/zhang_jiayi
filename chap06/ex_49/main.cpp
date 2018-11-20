#include <iostream>
using namespace std;
double circleArea(int r)
{
    double s=3.14*r*r;
    return s;
}
int main()
{
    int r;
    cout<<"请输入圆的半径:";
    cin>>r;
    cout<<"圆的面积为："<<circleArea(r)<<endl;
}
