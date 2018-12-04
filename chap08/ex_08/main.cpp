#include <iostream>
using namespace std;
int main()
{
    unsigned int values[5]={2,4,6,8,10};
     unsigned int *pa=values;
    *(pa+0)=2;
    *(pa+1)=4;
    *(pa+2)=6;
    *(pa+3)=8;
    *(pa+4)=10;
    
}