#ifndef Course_H
#define Course_H
#include <iostream>
using namespace std;

//TODO: class roster 

class Course {

    public:
    Course();//default constructor 
	//setters/ mutators
        void setName(string aName); //sets full course name
        void setCourseNum(int courseNumber); //sets CRN
        void printCourse(); //prints out CRN + Name  

        //void setStartTime(string startingTime);
        //void setEndTime(string endingTime);
        //void setInstructor(string instructorName); 
        //void setCredits(int numberofCredits);

	    //getters/ accessors
        //OB: commeted out unused getters/accessors
        //string getStartTime();
        //string getEndTime();
        //string getInstructor();
        //string getCourseLocation();

        //OB: added getters
        string getName(); //returns the course name 
        int getCredits(); //returns number of credits in the course 
        int getCRN(); //returns the course number (course reference number)

       
        string getStudent(string nameofstudent); //returns the name and ID of given student 
        
        

 
//print course
	//print student
	//print specific student
 
//OB: commented out certain private members
	private:
	    string Name; //name of the course 
        int Credits; //number of credits   
	    int CourseNum; //course reference number CRN 
        //string Location; // building & room number
	    //string Instructor; //instructor name 
        //string StartTime; 
        //string EndTime;
        
        //TODO: 
        //  include student class, create a vector of student pointers
        //  vector should be called class roster 
        //create vector for class roster

        
        

};

#endif