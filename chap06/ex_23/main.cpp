#include <iostream>
using namespace std;
int H(int side)
{
    int i,j;
    for (i=0;i<side;i++){
        for (j=0;j<side;j++){
            cout<<"#";
        }
        cout<<"\n";
    }
}
int main()
{
    int fillCharacter;
    cout<<"Please input one integer number:";
    cin>>fillCharacter;
    cout<<H(fillCharacter);
}