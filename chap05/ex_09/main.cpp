#include <iostream>
using namespace std;
int main()
{
    int sum=1;
   for(int i=1;i<=15;i++)
   {
    if(i%2!=0)
    {
        sum=i*sum;
    }   
   }
   cout<<"奇数乘积结果："<<sum<<endl;
}