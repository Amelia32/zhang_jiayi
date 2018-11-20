#include <iostream>
#include<math.h>
using namespace std;
double F(float x)
{
   int y=floor(x+0.5);
    return y;
}
int main()
{
    for(int i=1;i<5;i++){
    while(i<5)
    {
        
    float a;
    cout<<"Please enter a number:"<<endl;
    cin>>a;
    cout<<"原始数值\t舍入后的数值"<<endl;
    cout<<a<<"\t"<<"\t"<<F(a)<<endl;
    }
    
    }
    cout<<"over";
}
