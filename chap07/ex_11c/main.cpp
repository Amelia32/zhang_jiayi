#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<double,12>monthyTemperatures;
     int a;
     for (size_t i=0;i<monthyTemperatures.size();i++)
     {
         cin>>a;
         monthyTemperatures[i]=a;
         
     }
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<monthyTemperatures.size();j++)
             cout<<setw(7)<<j<<setw(13)<<monthyTemperatures[j]<<endl;
}