#include <iostream>
 using namespace std;

 int main()
 {
     float Sales,Salary;
     cout<<"Enter salaes to dollars(-1 to end):";
     cin>>Sales;
     while(Sales!=-1)
     {
         cout<<"Salary is:"<<(200+Sales*0.09)<<endl;
     }
     cout<<endl<<endl;
     cout<<"Enter salaes to dollars(-1 to end):";
     cin>>Sales;
 }
