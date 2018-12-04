#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<int,5>values;
     for (size_t i=0;i<values.size();i++)
         values[i]=8;
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<values.size();j++)
             cout<<setw(7)<<j<<setw(13)<<values[j]<<endl;
}
 