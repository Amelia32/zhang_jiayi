#ifndef ACCOUNT_H
#define ACCOUNT_H
using namespace std;

class Account
{
public:
    Account(double,double,double);
    void setCredit (double);
    void setDebit( double);
    double getCredit();
    double getDebit();
    double getBalance();
    
private:

    double balance,credit,debit;
};

#endif // ACCOUNT_H
