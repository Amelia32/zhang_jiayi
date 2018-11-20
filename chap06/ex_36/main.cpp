#include <iostream>
using namespace std;
double power(int base,int exponent){
    int y;
    if(exponent==1)
        y=base;
     else
        y=power(base,exponent-1)*base;
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
        cout<<"Result:"<<power(a,b)<<endl;
            }
    }
}

