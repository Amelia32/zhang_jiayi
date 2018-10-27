#include <iostream>
 #include<math.h>
 using namespace std;
 int main()
 {
     int a,b;
     int f=0;
     
     cout<<"Please enter a decimal number";
     cin>>a;
     while(a!=0)
     
     {
         b=a%2;
         a/=2;
         f=f*10+b;
     }
     
     cout<<"The binary system is:"<<f<<endl;
     
 }