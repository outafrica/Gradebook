//
//01000111 01100101 01101111 01110010 01100111 01100101
//
#include <utility>
#include <iostream>
#include "gradebook.h"

GradeBook::GradeBook( std::string name ) //defining constructor
{
    setCourseName(std::move(name));  //validating and storing course name

    maxGrade = 0;   //value will be replaced by highest grade

}   //end grade book constructor

void GradeBook::setCourseName( std::string name )   //defining set course name function
{
    if ( name.length() <= 25 )  //checks whether course name fits length
        courseName = name;  //stores the name entered into course name
    else
    {

        courseName = name.substr( 0, 25 );  //takes first 25 characters
        std::cout << "Name \"" << name << "\" exceeds maximum length (25)\n"
        << "Limiting to first 25 characters" << std::endl;

    }   //end of loop

}   //end of set course name function

std::string GradeBook::getCourseName()  //defining get course name function
{

    return courseName;

}   //end get course name function

void GradeBook::displayMessage()    //defining the display message function
{

    std::cout << "Welcome to " << getCourseName() << " grade book!" << std::endl; //welcomes user to the course selected

}   //end display message function

void GradeBook::inputGrades()   //defining input grades functions
{

    int grade1;  //first grade entered by user
    int grade2;  //second grade entered by user 
    int grade3;  //third grade entered by user 

    std::cout << "Enter the three grades:" << std::endl;    //prompt user
    std::cin >> grade1 >> grade2 >> grade3; //store values entered

    maxGrade = maximum (grade1, grade2, grade3); //store the maximum value in maxgrade

}   //end of input grade function

int GradeBook::maximum (int x, int y, int z)    //defining the maximum function
{
    int maxValue = x;   //assuming x as the highest value as our pivot

    if (y > maxValue)
        maxValue = y;   //checks inversely whether y is larger than its value and takes the value of y if true

    if (z > maxValue)
        maxValue = z;   //checks inversely whether z is larger than its value and takes the value of z if true

    return maxValue;

}   //end of maximum function

void GradeBook::showReport()    //define show report function
{
    std::cout << "The maximum value is: " << maxGrade << std::endl;
    
}   //end show report function