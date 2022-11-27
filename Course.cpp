#include "Course.h"
#include "Student.h"
#include <iostream>
#include <string> 


using namespace std;

//TODO:
/*
      function to assign values to Pointer 
      add functions to get pointer values

    class roster     
    string getStudent(string nameofstudent); 
    //returns the name and ID of given student 
-   Add student to roster 
-   get student from roster 
     
*/

//default constructor
Course::Course()
{
	Name = "anewname";
    Credits = 4; //hard coded as 4 for CS2 Fall '22
	CourseNum = 0;
    Pointer = new Student;

	//Location = “anewLocation”;
	//Credits = 0;
	//Instructor = “aProfessor”; 
	//StartTime = “anewtime”
	//EndTime = “anewtime”; 
}

//OB
void Course::setName(string name)
{
    Name = name;//assigns the given name to the private member Name
}

//OB
void Course::setCourseNum(int courseNumber)
{
    CourseNum = courseNumber; //assigns the given number to the private member CourseNum 
};


//OB
int Course::getCRN()
{
    return CourseNum;
}

//OB
string Course::getName()
{
    return Name;
}

//OB
void Course::printCourse()
{
    cout << "\n"<< CourseNum << " " << Name << endl;
    //returns the CRN + course name
}

void Course::addToRoster(Student *studentPtr)
{
    classRoster.push_back(studentPtr);
}

Student * Course::getStudent()
{
    
    //TODO: loop through vector, if given name matches name in vector, return anewpointer
    /*
    for (int i = 0; i < classRoster.size(); i++)
    {
        if (classRoster.at(i)->getName())
    }
    */

   return Pointer;
}


//OB
/*
void Course::setStartTime(string startingTime){
    //enter a time already formatted
    //example: 4:00pm or 11:15am
    StartTime = startingTime
};
*/


//OB
/*
void setEndTime(string endingTime){
    //enter a time already formatted
    //example: 4:00pm or 11:15am
    EndTime = startingTime;
    }
*/

//OB
/*
void setInstructor(string instructorName){
    Instructor = instructorName;
};
*/ 

//OB
/*void Course::setCredits(int numberofCredits){
    Credits = numberofCredits;
};

*/
//OB
/*void Course::setDays(int days){

};
*/





