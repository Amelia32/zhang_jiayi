#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<string>
class GradeBook
{
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName() const;
    void displayMessage() const;
    void inputGradeReport() const;
private:
   std::string courseName;
   unsigned int aCount;
   unsigned int bCount;
   unsigned int cCount;
   unsigned int dCount;
   unsigned int fCount;
};

#endif // GRADEBOOK_H
