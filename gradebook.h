//
//Let's start over, my name is....
//
#include <istream>

class GradeBook //defining gradebook class
{
private:
    std::string courseName; //faculty course name
    int maxGrade; //stores highest grade realized

public:
    explicit GradeBook( std::string );   //constructor
    void setCourseName( std::string);   //validates course name entered
    std::string getCourseName (); //returns course name entered
    void displayMessage();  //welcomes user to the course chosen
    void inputGrades(); //user grade input function
    void showReport(); //report summary function
    int maximum(int, int, int); //function that compares the grades entered by user.

};  //end of class
