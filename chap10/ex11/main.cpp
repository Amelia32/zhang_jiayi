#include <iostream>
#include "Polynomial.h"
using namespace std;

int  main()
{
	Polynomial a,b,c,t,d;
	a.EnterTerms();
	b.EnterTerms();
	cout<<endl<<"First polynomial is:";
	a.PrintPolynomial();
	cout<<endl<<"Second polynomial is:";
	b.PrintPolynomial();
	cout<<endl<<"Adding the polynomials yields:";
	c=a+b;
	c.PrintPolynomial();
	cout<<endl<<"+=the polynomials yields:";
	t=a;
	a+=b;
	a.PrintPolynomial();
	cout<<endl<<"Subtracting the polynomials yields:";
	a=t;
	c=a-b;
	c.PrintPolynomial();
	cout<<endl<<"-=the polynomials yields:";
	a-=b;
	a.PrintPolynomial();
	cout<<endl<<"Multiplying the polynomials yields:";
	a=t;
	c=a*b;
	c.PrintPolynomial();
	cout<<endl<<"*=the polynomials yields:";
	a*=b;
	a.PrintPolynomial();
	cout<<endl;
}
