#include <iostream>
#include <array>
using namespace std;
#include<iomanip>


    const size_t rows=2;
    const size_t columns=3;
    void p(const array<array<int,columns>,rows>&);
    
int main()
{
    int a,b,c,d,e,f;
    int smallest=100000000;
    array<array<int,columns>,rows>array={2,1,3,4,5,6};
for(int i=0;i<array.size();i++)
{
    for(int j=0;j<array.size();j++)
    {
        for(int h=1;h<array.size();h++)
        {
        if(array[i][j]<array[i][h])
        {
            h=j;
            smallest=min(smallest,array[i][h]);
            
        }
    
        }
        }
}
    
    cout<<"Values in array by row are:"<<endl;
    p(array);
    cout<<"Smallest:"<<smallest<<endl;
}
void p(const array<array<int,columns>,rows>&a)
{
    for(auto const&rows:a)
    {
        for(auto const &element:rows)
        cout<<element<<' ';
        cout<<endl;
    }
}