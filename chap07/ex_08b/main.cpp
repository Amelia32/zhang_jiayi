#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    int a;
    cin>>a;
     array<float,4>grades;
     for (size_t i=0;i<grades.size();i++)
     if(i=3)
         grades[i]=a;
         else
             grades[i]=0;
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         
         for(size_t j=0;j<grades.size();j++)
             cout<<setw(7)<<j<<setw(13)<<grades[j]<<endl;
}
 