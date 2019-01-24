#include <utility>

//
//01000111 01100101 01101111 01110010 01100111 01100101
//
#include <iostream>
#include "gradebook.h"

GradeBook::GradeBook( std::string name ) //defining constructor
{
    setCourseName(std::move(name));  //validating and storing course name

    //initializing counters
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;

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

    int grade;  //grade entered by user

    std::cout << "Enter the letter grades.\n"
                 "Enter EOF character to end input." << std::endl;  //user prompt

    while ((grade = std::cin.get()) != EOF) //defining while loop
    {
        switch (grade)  //defining case
        {
            //cater for both uppercase and lowercase
            case 'A':
            case 'a':
                ++aCount;   //increment counter
                break;  //exit instance

            //cater for both uppercase and lowercase
            case 'B':
            case 'b':
                ++bCount;   //increment counter
                break;  //exit instance

                //cater for both uppercase and lowercase
            case 'C':
            case 'c':
                ++cCount;   //increment counter
                break;  //exit instance

                //cater for both uppercase and lowercase
            case 'D':
            case 'd':
                ++dCount;   //increment counter
                break;  //exit instance

                //cater for both uppercase and lowercase
            case 'F':
            case 'f':
                ++fCount;   //increment counter
                break;  //exit instance

                //cater for newline, tab and space
            case '\n':
            case '\t':
            case ' ':
                break;  //exit instance

                //cater for undefined cases
            default:
                std::cout << "Invalid entry. Try again!" << std::endl;  //request retry
                break;  //exit instance

        }   //end of switch
    }   //end of while
}   //end of input grade function

void GradeBook::showReport()    //define show report function
{

    std::cout << "Below is the report summary for the marks entered for "<< getCourseName() << "!" << std::endl;    //banner

    std::cout << "Grade\t\t" << "Number of Students" << std::endl;  //display results
    std::cout << "A\t\t" << aCount <<std::endl;
    std::cout << "B\t\t" << bCount <<std::endl;
    std::cout << "C\t\t" << cCount <<std::endl;
    std::cout << "D\t\t" << dCount <<std::endl;
    std::cout << "F\t\t" << fCount <<std::endl;

}   //end show report function