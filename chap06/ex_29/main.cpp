#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int i,k,b;
cout<<"请输入你要求的素数的范围：";
cin>>b;
cout<<"到";
cin>>k;
for(i=b;i<k;i++)
{
int a;
int f = 1;
for(a=2;a<i;a++)
{
if(i%a==0)
f = 0;
}
if(f==1)
    
    cout<<i<<" ";
}
}
                                                              