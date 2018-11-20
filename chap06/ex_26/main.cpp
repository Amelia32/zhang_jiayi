#include <iostream>
#include<math.h>
using namespace std;
int celsius(int x)
{
    int y=(x-32)/1.8;
    return y;
}
int fahrenheit(int x)
{
    int y=x*1.8+32.0;
    return y;
}
int main()
{
    int i;
    cout<<"摄氏温度\t华氏温度"<<endl;
    for(i=1;i<=100;i++)
    {
        cout<<i<<"\t"<<"\t"<<" "<<fahrenheit(i)<<endl;
    }
    int j;
    cout<<"华氏温度\t摄氏温度"<<endl;
    for(j=32;j<=212;j++)
    {
        cout<<j<<"\t"<<"\t"<<" "<<celsius(j)<<endl;
    }
}
