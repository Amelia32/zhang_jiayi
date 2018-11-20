#include <iostream>
using namespace std;
int Change(int n)
{
int num = 0;
int t;
while (n > 0)
    {
t = n % 10;
num = num * 10 + t;
n /= 10;
    }
return num;
}

int main(){
int n;
while (cin>>n)
    cout << n << "逆序输出是：" << Change(n) << endl;
return 0;
}