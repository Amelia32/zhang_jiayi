#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
     array<float,99>w;
     for (size_t i=0;i<w.size();i++)
     {
         w[i]=i;
         int m;
    for (m=1; m<100; m++)
    {
    while(w[i]>w[m])
    {
        m=i;
        if(m>0)
        {
            int k=0;
            w[k]=w[m];
            w[m]=w[k];
            
        }
     }
     
    }
         cout<<"Element"<<setw(13)<<"Value"<<endl;
         for(size_t j=0;j<w.size();j++)
             cout<<setw(7)<<j<<setw(13)<<w[j]<<endl;
             cout<<"The largest number is:"<<w[1]<<endl;
             cout<<"The smallest bnumber is:"<<w[99]<<endl;
}
}