#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b=1;
    int c=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=4;j>=b;j--)
        {
            cout<<" ";
        }
        for(int x=1;x<=c;x++)
        {
         cout<<"*";   
        }
        cout<<endl;
        b++;
        c+=2;
    }
    int d=4;
    int h=1;
    int x=1;
    for(int z=1;z<=d;z++)
    {
        for (int e=1;e<=x;e++)
        {
            cout<<" ";
        }
        for(int f=7;f>=h;f--)
        {
            cout<<"*";
        }
        cout<<endl;
        x++;
        h+=2;
    }
    
}
