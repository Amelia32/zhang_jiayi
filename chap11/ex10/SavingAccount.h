#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include<string>
#include"Account.h"

class SavingAccount:public Account
{
public:
    SavingAccount(double,double,double,double);
    void setRate(double);
    double getRate();
    double calculateInterest();
private:
    double rate;

};

#endif // SAVINGACCOUNT_H
