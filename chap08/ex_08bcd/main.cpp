#include <iostream>
using namespace std;
int main()
{
     unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr=values;
    
    for(int i=0;i<5;i++)
    {
    
        cout<<values[i]<<endl;
    }
}