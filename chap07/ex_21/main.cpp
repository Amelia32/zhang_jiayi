#include <iostream>
#include <array>
#include<iomanip>
using namespace std;
const size_t salesman=4;
const size_t product=5;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m>>n>>o>>p>>q>>r>>s>>t;
    array<array<int,product>,salesman>array={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t};
    cout<<"        ";
    for(size_t salesman=0;salesman<4;++salesman)
    {
        cout<<"Salesman"<<salesman+1<<"  ";
        cout<<"Total Sales"<<endl;
    }
    for(size_t product=0;product<5;++product)
    {
        cout<<"Product"<<setw(2)<<product+1;
        for(size_t salesman=0;salesman<array[product].size();++salesman) 
        {
            cout<<setw(8)<<array[product][salesman];
            int total;total+=array[product][salesman];
            cout<<setw(9)<<setprecision(2)<<fixed<<total<<endl;
        } 
        int x; x+=array[product][salesman];
        cout<<"Sales"<<setw(2)<<x<<"  ";
    }
    
    
}