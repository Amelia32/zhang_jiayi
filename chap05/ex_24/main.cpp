#include <iostream>
using namespace std;
int main()
{
        int a;
        cout<<"输入菱形的行数:" ;
        cin>>a;
    int b=1;
    int c=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=(a-1);j>=b;j--)
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
    int d=a-1;
    for(int z=1;z<=d;z++)
    {
        for (int e=1;e<=b;e++)
        {
            cout<<" ";
        }
        for(int f=(a+2);f>=c;f--)
        {
            cout<<"*";
        }
        cout<<endl;
        b++;
        c+=2;
    }
    }
