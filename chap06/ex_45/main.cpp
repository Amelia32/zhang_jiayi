#include <iostream>
using namespace std;
int mystery(int a,int b)
{
    int z=a*b;
    return z;    
}
int main()
{
    int x=0;
    int y=0;
    cout<<"Enter two integers:";
    cin>>x>>y;
    cout<<"The result is"<<mystery(x,y)<<endl;
}
