#include <iostream>
using namespace std;
int main()
{
   long value1=200000,value2=1;
   long *longPtr=&value1;
    cout<<"longPtr所指对象的值:"<<*longPtr<<endl;
    value2=*longPtr;
    cout<<"value2的值为："<<value2<<endl;
    cout<<"value1的值为："<<&value1<<endl;
    cout<<"储存在longPtr的地址:"<<longPtr<<endl;
}