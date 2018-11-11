#include <iostream>
#include <string.h>
using namespace std;
#define N 20
int main()
{
int i,t;
char s[N];
cout<<"请输入一个整数:"<<endl;
cin>>s;
t=strlen(s);
for(i=0;i<t/2;i++)
if(s[i]==s[t-i-1])
continue;
else
break;
if(i==t/2)
cout<<"该数是回文数"<<endl;
else
cout<<"该数不是回文数"<<endl;
}