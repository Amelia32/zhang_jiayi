#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
   Time t; // create Time object

   // display current time
   cout << "The universal time is ";
   t.printUniversal();
   cout << "\nThe standard time is ";
   t.printStandard();
   cout << endl;