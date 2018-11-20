#include <iostream>
using namespace std;
unsigned int flip()
{
    int i;
    if(i=1)
        return 1;
    else
        return 0;
}
int main()
{
long int i,z=0,f=0,a;
for (i=1;i<101;i++)
{
a=rand()%2;
if(a==flip())
    z=z+1;
    cout<<"Head"<<" ";
 if(a==flip())
     f=f+1;
     cout<<"Tail"<<" ";
}
cout<<endl;
cout<<"正面的次数为："<<z<<"次"<<endl;
cout<<"反面的次数为："<<f<<"次"<<endl;
}
