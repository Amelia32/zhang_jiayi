#include "SavingAccount.h"
#include<iostream>
using namespace std;

SavingAccount::SavingAccount(double intialBalance,double cre,double deb,double rate ):Account(intialBalance,cre,deb)
{
    setRate(rate);
}
void SavingAccount::setRate(double rate)
{
    rate = ( rate < 0.0 ) ? 0.0 : rate;
}
double SavingAccount::calculateInterest()
{
   return getBalance() * rate;
} 

