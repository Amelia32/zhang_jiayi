#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    int i,k,b;
cout<<"请输入你要求的素数的范围：";
cin>>b;
cout<<"到";
cin>>k;
    array<int,1000>s;
     for (size_t i=b;i<s.size();i++)
       {  s[i]=1;

   for(int a=2;a<=i;a++)
   {
   if(i%a==0)
   {
    s[i] = 0;
    
   } 
    else
   {
        s[i]=1;
        for(int c=i*2;c<=k;c+=i)
    {
        s[c]=0;
    }
    }
   }
       }

    for(size_t j=b;j<s.size();j++)
             cout<<setw(7)<<j<<setw(13)<<s[j]<<endl;
}