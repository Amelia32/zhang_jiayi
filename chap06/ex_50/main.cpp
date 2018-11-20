#include <iostream>
using namespace std;
int tripleByValue( int);
void tripleByReference(int&);
int main()
{
    int count;
    cout<<count<<"before tripleByValue\n";
    cout<<"Value returned by triplByValue:"<<tripleByValue(count)<<endl;
    cout<<count<<"after triplByValue\n"<<endl;
    cout<<count<<"before tripleByReference"<<endl;
    tripleByReference(count);
    cout<<count<<"after tripleByReference"<<endl;
}
int tripleByValue(int count)
{
    return count=3*count;
}
void tripleByReference(int &count)
{
    count=3*count;
}