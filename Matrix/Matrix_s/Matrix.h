#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
#include<iomanip>
using namespace std;

class Matrix
{
public:
    Matrix(int,int,int *);
    Matrix(Matrix&);//构造函数
    void Set(int,int);
    friend ostream& operator<<(ostream &,const Matrix &);
    friend istream& operator>>(istream &,const Matrix &);
    Matrix& operator + (const Matrix&);
    Matrix& operator - (const Matrix&);
    Matrix& operator = (const Matrix&);
    ~Matrix();

private:
    int rows;
    int lines;
    int *M;
};


#endif // MATRIX_H
