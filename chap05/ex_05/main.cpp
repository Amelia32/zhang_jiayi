#include <iostream>
using namespace std; 
int main()
{
    int a,b;
    cout<<"Enter the number of values:";
    cin>>a;
    int number[a];
    int i;
    for(i=1; i<=a; i++)
    {
        cout<<"Please enter a number:";
        cin>>b;
        number[i]=b;
    }
    for(i=1;i<=a;i++)
        cout<<number[i]<<" ";
}