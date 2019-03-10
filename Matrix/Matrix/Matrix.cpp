#include "Matrix.h"
#include<iomanip>
using namespace std;

istream& operator>>(istream &input, Matrix &a)
{
    int i, j;
    for (i=0; i<2; i++)
        for (j=0; j<3; j++)
            cout<<"Please enter array: ";

            input>>a.arr[i][j];
    return input;
}

ostream& operator<<(ostream &output, Matrix &a)
{
    int i, j;
    for (i=0; i<2; output<<endl, i++)
        for (j=0; j<3; output<<setw(4)<<a.arr[i][j], j++);
    return output;
}


