#include <iostream>
#include "CheckingAccount.h" 
using namespace std;


CheckingAccount::CheckingAccount( double initialBalance,double cre,double deb,double fee )
   : Account( initialBalance,cre,deb) 
{
   transactionFee = ( fee < 0.0 ) ? 0.0 : fee; 
} 
void CheckingAccount::credit( double cre )
{
  
   chargeFee();
} 

bool CheckingAccount::debit( double deb )
{
   bool success = deb; 

   if ( success ) 
   {
      chargeFee();
      return true;
   } 
   else 
      return false;
} 

void CheckingAccount::chargeFee()
{
   Account:: getBalance() - transactionFee ;
   cout << "$" << transactionFee << " transaction fee charged." << endl;
}