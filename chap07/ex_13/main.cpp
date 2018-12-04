#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    array<int,20>s;
    int num,count=0;
    for(size_t i=0;i<s.size();i++)
    {
       cin >> num;
    if (num < 10 || num > 100)
 {
     cout << "该数字无效\n";
      continue;
     }
    int j;
    for (size_t j=0; j != count; ++j)
{
   if (s[j] == num)
{
   break;
}
}
if (j == count)
{
   s[count++] = num;
}
}
  for (int i = 0; i != count; ++i)
{
   cout << s[i] << " ";
}
}