#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<int,5>bestScores;
     int a=1;
     for (size_t i=0;i<bestScores.size();i++)
     {
         
         bestScores[i]=a;
         
     }
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<bestScores.size();j++)
             cout<<setw(7)<<j<<setw(13)<<bestScores[j]<<endl;
}