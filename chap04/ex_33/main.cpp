#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"请输入三个非零的整数"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
        if(a+b>c&&a+c>b&&b+c>a)
        {
            cout<<"三条边可以构成一个三角形"<<endl;
        }
        else{
            cout<<"输入的三边不能构成一个三角形"<<endl;
        }
    return 0;
}
