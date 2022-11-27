#ifndef Course_H
#define Course_H
#include "Student.h"
#include <iostream>
#include <vector>
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
        void addToRoster(Student *studentPtr); // pushes back student to roster vector 
       
        Student *getStudent(); //returns a student pointer 

//TODO:
/*
    -assign private member details to pointer 
    -add pointer functionality (setters/getters/delete)

*/
        
        

 
//print course
	//print student
	//print specific student
 
//OB: commented out certain private members
	private:
	    string Name; //name of the course 
        int Credits; //number of credits   
	    int CourseNum; //course reference number CRN 
        Student * Pointer;
        //string Location; // building & room number
	    //string Instructor; //instructor name 
        //string StartTime; 
        //string EndTime;
        
        //TODO: 
        //  include student class, create a vector of student pointers
        //  vector should be called class roster 
        vector<Student *> classRoster;

};

#endif