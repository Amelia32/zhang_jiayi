#include <iostream>
#include "GradeBook.h"
using namespace std;
int main()
{
    GradeBook myGradeBook("CS101 C++ Programming");
    myGradeBook.displaymessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
    
}
