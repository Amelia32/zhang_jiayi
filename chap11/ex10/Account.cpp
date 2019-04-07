#include "Account.h"
#include<iostream>
#include<string>
using namespace std;

Account::Account(double intialBalance,double cre,double deb)
{
    double balance=0.0;
    if(intialBalance>=0.0)
    {
        balance=intialBalance;
    }
    else
    {
        cout<<"Error: Initial balance cannot be negative."<<endl;
    }
    credit=cre;
    debit=deb;
}

void Account::setCredit(double cre)
{
    balance=balance+cre;
}
void Account::setDebit(double deb)
{
    if(deb>balance)
        cout<<"Debit amount exceeded amount balance."<<endl;
        else
        {
         balance-=deb;   
        }
}
double Account::getCredit()
{
    return credit;
}
double Account::getDebit()
{
    return debit;
}
double Account::getBalance()
{
    return balance;
}

