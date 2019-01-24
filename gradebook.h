//
//Let's start over, my name is....
//
#include <istream>

class GradeBook //defining gradebook class
{
private:
    std::string courseName; //faculty course name
    int aCount; //A grade counter
    int bCount; //A grade counter
    int cCount; //A grade counter
    int dCount; //A grade counter
    int fCount; //A grade counter

public:
    explicit GradeBook( std::string );   //constructor
    void setCourseName( std::string);   //validates course name entered
    std::string getCourseName (); //returns course name entered
    void displayMessage();  //welcomes user to the course chosen
    void inputGrades(); //user grade input function
    void showReport(); //report summary function

};  //end of class
