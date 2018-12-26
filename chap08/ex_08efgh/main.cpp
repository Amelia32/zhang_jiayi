#include <iostream>
using namespace std;
int main()
{
    cout<<fixed<<showpoint<<setprecision(1);
    for(int i=0;i<size;i++)
    {
        cout<<*(vPtr+i)<<' ';
    }
    for(int j=0;j<size;j++)
    {
        cout<<*values(vPtr+j)<<' ';
    }
    for(int m=0;m<size;m++)
    {
        cout<<vPtr[m]<<' ';
    }
    values[4];
    *(values+4);
    vPtr[4];
    *(vPtr+4);
    
}