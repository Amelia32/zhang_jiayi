#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<double,34>b;
     array<double,11>a;
     for (size_t i=0;i<b.size();i++)
         b[i]=0;
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<b.size();j++)
             cout<<setw(7)<<j<<setw(13)<<b[j]<<endl;
}
 
