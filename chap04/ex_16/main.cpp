#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter hours worked (-1 to end):";
    cin>>a;
    
    while (a!=-1)
    {
        cout <<"Enter hourly rate of the employee(500.00):";
        cin>>b;
        if (a<=40)
        {
            c=a*b;
        }
        if (a>40)
        {
            c=b*40+(a-40)*(b*1.5);
        }
        
        cout <<"Salary is :"<<c<<endl;
        cout<<endl<<endl;
    cout<<"Enter hours worked(-1 to end):";
    cin>>a;
    }
    
}

