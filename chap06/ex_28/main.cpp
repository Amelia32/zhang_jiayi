#include <iostream>
using namespace std;
bool isperfect(int a)
{
    if(a<=1)
        return false;
        int i,s=0;
        for(i=1;i<a;i++)
            if(a%i==0)
                s=s+i;
                return (s==a);
}
int main()
{
    int i,j;
    cout<<"1000以内的完数有：\n";
    for(i=2;i<1000;i++)
        if(isperfect(i))
        {
            cout<<i<<"="<<"1";
            for(j=2;j<i;j++)
                if(i%j==0)
                    cout<<"+"<<j;
                    cout<<endl;
        }
        
        return 0;
}