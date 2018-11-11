#include <iostream>
#define counter 10
using namespace std;
int main()
{
   int number[counter];
   cout<<"Please enter ten numbers:" ;
        int m;
        for(m=0;m<counter;m++)
        cin>>number[m];
        for(m=0;m<counter-1;m++)
        {
        int j=m;
        for(int i=m+1;i<counter;i++)
        if(number[i]>number[j])
           j=i;
        if(j>m)
            {
                int k=number[m];
                number[m]=number[j];
                number[j]=k;
                
            }
        }
        cout<<endl;
        for(m=0;m<counter;m++)
        cout<<number[m]<<" ";
        cout<<endl;
        cout<<"The largest two numbers are:"<<number[0]<<" "<<number[1]<<endl;
}
 