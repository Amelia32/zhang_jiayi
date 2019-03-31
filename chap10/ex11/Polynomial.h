
#include <iostream>
using namespace std;
class Polynomial
{
public:
	Polynomial();
	Polynomial operator+(const Polynomial&)const;
	Polynomial operator-(const Polynomial&)const;
	Polynomial operator*(const Polynomial&);
	Polynomial& operator+=(const Polynomial&);
	Polynomial& operator-=(const Polynomial&);
	Polynomial& operator*=(const Polynomial&);
	void EnterTerms();//输入函数
	void PrintPolynomial( )const;//打印函数
private:
	int exponents[100];
	int coefficients[100];
	void polynomialCombine(Polynomial&);//合并同类项
};
