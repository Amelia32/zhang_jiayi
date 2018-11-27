#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int a=11;
    int b=1;
    for(i=1;i<a;i++)
    {
        for(j=1;j<=b;j++)
        {
            cout<<"*";
            
        }
        cout<<endl;
        b++;
    }
    
    cout<<endl;
    int c=0;
    for(i=1;i<a;i++)
    {
        for(j=10;j>b;j--)
        {
           cout<<"*";
        }
        cout<<endl;
        b++;
    }
    cout<<endl<<endl;
    int x;
    int y=1;
    for(i=1;i<a;i++)
    {
        for(j=1;j<b;j++)
        {
            cout<<" ";
        }
        for(x=10;x>=y;x--)
            {
                cout<<"*";
            }
            y++;
        cout<<endl;
        b++;
    }
    cout<<endl<<endl;
    cout<<endl;
    for(i=1;i<a;i++)
    {
        for(j=10;j>b;j--)
        {
            cout<<" ";
        }
        for(x=1;x<=b;x++)
            {
                cout<<"*";
            }
        cout<<endl;
        b++;
    }
}