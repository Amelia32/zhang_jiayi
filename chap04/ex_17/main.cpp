#include <iostream>
#define counter 10
using namespace std;
int main()
{
    int number[counter];
    int Largest;
    cout<<"Plesae enter the sales amount of each :";
    int m;
    for (m=0; m<counter; m++)
    cin>>number[m];
    int j=0;
    for (int i=1;i<counter;i++)
    while(number[i]>number[j])
    {
        j=i;
        if(j>0)
        {
        Largest=number[j];
            
        }
    }
     cout<<endl;
     cout<<"The largest sales is:"<<Largest<<endl;   
    
}
