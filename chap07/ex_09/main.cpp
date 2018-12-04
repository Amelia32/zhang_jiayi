#include <iostream>
#include <array>
using namespace std;
#include<iomanip>


    const size_t rows=2;
    const size_t columns=3;
    void p(const array<array<int,columns>,rows>&);
    
int main()
{
    array<array<int,columns>,rows>array={1,2,3,4,5};
    
    cout<<"Values in array by row are:"<<endl;
    p(array);
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