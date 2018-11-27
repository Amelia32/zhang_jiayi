#include <iostream>
using namespace std;

int jiecheng(int num)
{
    int f;
    if(num==1)
    f=1;
    else
    f=jiecheng(num-1)*num;
    return f;
}
int main(){
    cout<<"整数"<<"\t"<<"阶乘值"<<endl;
    for(int i=1;i<=5;i++)
    {
        
    cout<<i<<"\t"<<jiecheng(i)<<endl;
    
    }
}
