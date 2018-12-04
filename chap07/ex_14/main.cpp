#include <iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    array<int,20>vector;
    int num,count=0;
    for(size_t i=0;i<vector.size();i++)
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
   if (vector[j] == num)
{
   break;
}
}
if (j == count)
{
   vector[count++] = num;
}
}
  for (int i = 0; i != count; ++i)
{
   cout << vector[i] << " ";
}
}