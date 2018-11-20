#include <iostream>
using namespace std;
int main()
{
    int i,b;
    double ave;
    double s=0;
    for(i=0;b!=9999;i++)
    {
        cin>>b;
        s=s+b;
    }
    i=i-1;
      ave=(s-9999)/i;
    cout<<"平均值："<<ave<<endl;
} 