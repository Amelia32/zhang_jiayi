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
    int n;
    cout<<"请输入一个非负整数：";
    cin>>n;
    cout<<jiecheng(n)<<endl;
    return 0;
}