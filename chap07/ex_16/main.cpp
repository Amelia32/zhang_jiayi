#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
int main()
{
    const size_t arraySize=36000;
int i, num1, num2;
 array<int,arraySize>sum;
for(size_t i=0; i<sum.size(); i++)
{
num1 = rand() % 6 + 1;
num2 = rand() % 6 + 1;
  sum[i]=num1+num2;;
  
}
cout<<"Element"<<setw(13)<<"和"<<endl;
for(size_t j=0;j<sum.size();j++)
{
cout<<setw(7)<<j<<setw(13)<<sum[j]<<endl;
}
}

