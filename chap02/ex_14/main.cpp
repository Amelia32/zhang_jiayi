#include <iostream>

 using namespace std;
 int main()
 {
     int accountNumber;
     double balance,charges,credits,limit;
     
     cout<<"Enter account number(or -1 to quit):";
     cin>>accountNumber;
     
     while(accountNumber != -1)
     {
         cout<<"Enter beginning bakance:\n";
         cin>>balance;
         cout<<"Enter total charges:\n";
         cin>>charges;
         cout<<"Enter total credits:\n";
         cin>>credits;
         cout<<"Enter credit limit:\n";
         cin>>limit;
         cout<<"New balance is :"<<(balance+charges-credits)<<endl;
         
         if(balance+charges-credits > limit)
         {
             cout<<"Account:"<<accountNumber<<endl;
             cout<<"Credit limit:"<<limit<<endl;
             cout<<"Balance:"<<(balance+charges-credits)<<endl;
             cout<<"Credits Limit Exceedd"<<endl;
             cout<<endl<<endl;
             cout<<"Enter account number(-1 to end):";
             
         }
         else{
             cout<<endl<<endl;
             cout<<"Enter account number(or -1 to quit):";
          
             }
        cin>>accountNumber;
     }
