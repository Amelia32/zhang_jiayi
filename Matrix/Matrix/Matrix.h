#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
#include<string>
using namespace std;

class Matrix
{
    
    public:
    Matrix();
    friend Matrix operator+(Matrix a1, Matrix a2);
    friend istream& operator>>(istream &, Matrix &);
    friend ostream& operator<<(ostream &, Matrix &);
private:
    int arr[2][3];
};
Matrix::Matrix()
{
    int i, j;
    for (i=0; i<2; i++)
        for (j=0; j<3; arr[i][j++]=0);
}
Matrix operator+(Matrix a1, Matrix a2)
{
    Matrix a3;
    for (int i=0; i<2; i++)
        for (int j=0; j<3; j++)
            a3.arr[i][j]=a1.arr[i][j]+a2.arr[i][j];
    return a3;

    
    

};
#endif // MATRIX_H
