#include <iostream>
using namespace std;
int main()
{
   double r,pi;
   pi=3.14159;
   cout<<"Please enter the circle radius: ";
   cin>>r;
   cout<<"diameter:"<<2*r<<endl;
   cout<<"perimeter:"<<2*pi*r<<endl;
   cout<<"area:"<<pi*r*r<<endl;
   return 0;
}