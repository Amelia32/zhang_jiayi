#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"输入数组中数的个数：";
    cin>>a;
    int number[a];
    for(int i=0;i<a;i++)
    {
        cin>>number[i];
    
    }    
    int m=0;
    for(int j=1;j<a;j++)
        {
            if(number[j]<number[m])
            {
                j=m;
                if(m>0){
                int k;
                k=number[0];
                number[0]=number[m];
                number[m]=k;}
            }
        
        }
    cout<<endl;
    cout<<"最小的数是："<<number[0]<<endl;
}