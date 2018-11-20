#include <iostream>
#include<math.h>
using namespace std;
double calculateCharges(double x)
{
    double y;
    if(x<0){
         y=2.00;
    }
    else{
     y=3+0.5*ceil(x-3);
    }
    return y;
    
}
int main()
{
    float a,b,c;
    cout<<"Please enter the hours:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Car\tHours\tCharge"<<endl;
        
            cout<<"1"<<"\t"<<a<<"\t"<<calculateCharges(a)<<endl;
        
            cout<<"2"<<"\t"<<b<<"\t"<<calculateCharges(b)<<endl;
        
            cout<<"3"<<"\t"<<c<<"\t"<<calculateCharges(c)<<endl;
        
        cout<<"TOTAL"<<"\t"<<(a+b+c)<<"\t"<<(calculateCharges(a)+calculateCharges(b)+calculateCharges(c))<<endl;
}
