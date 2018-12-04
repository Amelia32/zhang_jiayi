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
    cin>>a>>b>>c>>d>>e>>f;
    array<array<int,columns>,rows>array={a,b,c,d,e,f };

    
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