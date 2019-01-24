//
// Sorry try again, this time binary.... I mean 0 1
//
#include "gradebook.h"

int main()
{
    GradeBook myGradeBook( "CS101 C++ Programming");    //creating the class object
    myGradeBook.displayMessage();   //call the welcoming message function
    myGradeBook.inputGrades();      //call the grade input function
    myGradeBook.showReport();       //call the report summary function

}   //end main