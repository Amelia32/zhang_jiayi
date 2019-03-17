#include "Matrix.h"
#include<iostream>
#include<string>
using namespace std;

Matrix::Matrix(int line=0,int row=0,int *pM=NULL)//构造函数
{
    if(line<0 || row < 0 )
    {
        cout<<"error matrix!\n";
        lines = rows =0;
        return ;
    }
    lines=line;
    rows=row;
    M = new int[lines*rows];//申请内存

}

Matrix::Matrix(Matrix& M2)//拷贝构造函数
{
    lines = M2.lines;
    rows =M2.rows;
    M = new int[lines*rows];//申请内存
    for(int i=0;i<rows*lines;i++)
        M[i]=M2.M[i];//赋值
}

void Matrix::Set(int line=-1, int row=-1)
{
    if (line != -1)//line上缺省，需要更新lines的值
        lines = line;
    if (row != -1)//row上缺省，需要更新rows的值
        rows = row;
        //更新长宽完成
    if (line < 0 || row < 0)
    {
        cout << "error matrix!\n";
        lines = rows = 0;
        return;
    }
    if (M != NULL)delete M;//删除原有内存
        M = new int[lines*rows];
        //重新申请内存
}


istream& operator >>(istream& istr, const Matrix& m)
{
    for (int i = 0; i <m.lines*m.rows; i++)
                istr >> m.M[i];
    return istr;
}

ostream& operator <<(ostream& ostr, const Matrix& m)
{
    for (int i = 0; i < m.lines; i++)
        {
            for (int j = 0; j <m.rows; j++)
                ostr << setw(4) << m.M[i*m.lines+j] << " ";
            ostr << '\n';
        }
    ostr << '\n';
    return ostr;
}

Matrix& Matrix::operator + (const Matrix& M2)
{
    if (M2.lines != lines || M2.rows != rows)//矩阵大小上一样
    {
        cout << "The two matrixs can't do the operation!\n";
        return Matrix();//返回空矩阵
    }
    Matrix *M3 =new Matrix(lines,rows);
    //new的东西是在堆里面,函数结束上会被删除
    Matrix& Re =*M3;
    for (int i = 0; i < lines * rows; i++)
        M3->M[i] = M[i] + M2.M[i];
    return Re;//传引用就上会调用构造函数，节省开销
}

Matrix& Matrix::operator - (const Matrix& M2)
{
    if (M2.lines != lines || M2.rows != rows)//矩阵大小上一样
    {
        cout << "The two matrixs can't do the operation!\n";
        return Matrix();
    }
    Matrix *M3 = new Matrix(lines, rows);
    //new的东西是在堆里面,函数结束上会被删除
    Matrix& Re =*M3;//建立那片内存的引用
    for (int i = 0; i < lines*rows; i++)
        M3->M[i] = M[i] - M2.M[i];
    return Re;//传引用就上会调用构造函数，节省开销
}

Matrix& Matrix::operator=(const Matrix& M2)
{
    if (this != &M2)//防止自赋值
    {
        if(M!=NULL)delete M;

        lines = M2.lines;
        rows = M2.rows;
        M = new int[lines*rows];//重新开辟内存

        for (int i = 0; i < lines*rows; i++)
            M[i] = M2.M[i];
    }
    return *this;
}

Matrix::~Matrix()
{
    delete M;
}
