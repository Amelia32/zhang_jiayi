#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<int,10>counts;
     for (size_t i=0;i<counts.size();i++)
         counts[i]=0;
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<counts.size();j++)
             cout<<setw(7)<<j<<setw(13)<<counts[j]<<endl;
} 
 