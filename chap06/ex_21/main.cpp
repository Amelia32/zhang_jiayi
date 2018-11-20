#include <iostream>
#include<math.h>
using namespace std;
int iseven(int x)
{
    if(x%2==0){
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    while(1){
        cout<<"Plesae enter number:";
        int a;
        cin>>a;
        cout<<iseven(a)<<endl;
    }
}
