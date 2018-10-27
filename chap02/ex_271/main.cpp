#include <iostream>
  #include <math.h>
  using namespace std;
  int main()
  {
      int b=0, sum=0;
      int a;
      cout<<"Please enter a binary number";
      cin>>a;
      int t;
      int d;
      do
      {
          b++;
          t=a%10;
          a/=10;
          d=pow(2,b);
          sum=sum+t*d;
      }
      while((a=0));
      cout<<"The decimal system is:"<<sum<<endl;
  } 
  
