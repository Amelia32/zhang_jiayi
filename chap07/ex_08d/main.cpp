#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    int sum=0;
     array<double,100>temperatures;
     for (size_t i=0;i<temperatures.size();i++)
     {
         temperatures[i]=1;
         
         int a=temperatures[i];
         sum=a+sum;
         
     }
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<temperatures.size();j++)
             cout<<setw(7)<<j<<setw(13)<<temperatures[j]<<endl;
             cout<<"100个元素的和："<<sum<<endl;
}
 