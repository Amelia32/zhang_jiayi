#include <iostream>
using namespace std;
double integerPower(int base,int exponent){
    int y;
    if(exponent==1)
        y=base;
     else
        y=integerPower(base,exponent-1)*base;
     return y;
}
int main()
{   
    while(1){
    int a,b;
cout<<"Please enter a two numbers:";
cin>>a;
cin>>b;
    if(b>0){
        cout<<"Result:"<<integerPower(a,b)<<endl;
            }
    }
}
