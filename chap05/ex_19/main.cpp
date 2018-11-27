#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    double pi=0.0;
    int b=1;
    cout<<"项数"<<"\t"<<"pi的近似值"<<endl;
    for(int i=1;i<=1000;i++)
    {
      for(int j=1;j<i*2;j=+2)
    {
        int a=pow(-1,(i+1));
        pi=(4/j)*a;
        pi=+pi;
        
    }
    cout<<i<<"\t"<<pi<<endl;
    }
}
