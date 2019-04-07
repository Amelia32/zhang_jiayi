#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include<Account.h>
#include<string>

class CheckingAccount : public Account
{
public:
   
   CheckingAccount( double, double ,double,double);

   void credit( double ); 
   bool debit( double ); 
private:
   double transactionFee; 
   void chargeFee();
}; 

#endif // CHECKINGACCOUNT_H
