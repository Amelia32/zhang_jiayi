 #include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<double,15>bonus;
     for (size_t i=0;i<bonus.size();i++)
     {
         bonus[i]=0;
         bonus[i]+=1;
         
         
     }
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<bonus.size();j++)
             cout<<setw(7)<<j<<setw(13)<<bonus[j]<<endl;
}