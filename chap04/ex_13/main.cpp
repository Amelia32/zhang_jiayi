#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    double d=0;
    cout<<"Enter miles driven (-1 to end):";
    cin>>a;
    while(a!=-1)
    {
    cout<<"Enter gallons used:";
    cin>>b;
    c=a/b;
    d=d+c;
       cout<<"MPG this trip:"<<c<<endl;
       cout<<"Total MPG:"<<d<<endl;  
    
    cout<<endl<<endl;
    cout<<"Enter the miles driven (-1 to end):";
    cin>>a;
    
    }
}
