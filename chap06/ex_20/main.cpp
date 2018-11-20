#include <iostream>
#include<math.h>
using namespace std;
int multiple(int a,int b){
    if(b%a==0){
        return true;
    }
    else{ 
        return false;
    }
}
int main()
{
    while(1){
    int a,b;
    cout<<"Please enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    cout<<multiple(a,b)<<endl;
    }
}
