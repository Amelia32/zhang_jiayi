#include <iostream>
#include<array>
using namespace std;
int main()
{
    int min;
    array<int ,6>recursiveMinimum={2,4,6,5,4,1};
    for(size_t i=1;i<recursiveMinimum.size();i++)
    {
        int j=2;
            if(recursiveMinimum[i]<recursiveMinimum[j])
            {
                j=i;
                if(j>0)
                {
                     min=recursiveMinimum[j];
                }
            }
        }
    cout<<"The smallist number is:"<<min<<endl;
}