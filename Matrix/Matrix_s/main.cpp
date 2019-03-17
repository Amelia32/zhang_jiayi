 #include <iostream>
    #include "Matrix.h"
using namespace std;

int main()
{   
    int line, row;
    Matrix A1, A2, A3;
    Matrix* pA1 = new Matrix;
    Matrix* pA2 = new Matrix;
    Matrix* pA3 = new Matrix;

    cout << "Input lines and rows of matrixA1:\n";
    cin >> line >> row;
    A1.Set(line, row);
    cout << "Input A1:\n";
    cin >> A1;
    //输入A1

    cout << "Input lines and rows of matrixA2:\n";
    cin >> line >> row;
    A2.Set(line, row);   
    cout << "Input A2:\n";
    cin >> A2;
    //输入A2
    cout<< "\n\n";

    A3 = A1 + A2;
    cout << A1 << "+\n" << A2 << "=\n"<< A3 << "\n\n";

    A3 = A1 - A2;
    cout << A1 << "-\n" << A2 << "=\n" << A3 << "\n\n";

    cout << "\n\n";

    cout << "Input lines and rows of matrixpA1:\n";
    cin >> line >> row;
    pA1->Set(line, row);
    cout << "Input pA1:\n";
    cin >> *pA1;
    //输入pA1

    cout << "Input lines and rows of matrixpA2:\n";
    cin >> line >> row;
    pA2->Set(line, row);
    cout << "Input pA2:\n";
    cin >> *pA2;
    cout << "\n\n";
    //输入pA2

    *pA3 = *pA1 + *pA2;
    cout << *pA1 << "+\n" << *pA2 << "=\n" << *pA3 << "\n\n";

    *pA3 = *pA1 - *pA2;
    cout << *pA1 << "-\n" << *pA2 << "=\n" << *pA3 << "\n\n";
    system("pause");
    return 0;
}