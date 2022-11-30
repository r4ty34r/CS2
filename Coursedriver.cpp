#include "Course.h"
#include <iostream> 

using namespace std;

void pointerprint (Student* aPointer)
{
    aPointer->printStudent();
}

//TODO: 
//      include student class, test out class roster 

//OB: created driver program 
int main(){
    Student *myPointer = new Student;
    string myFirst = "Joe";
    string myLast = "Smith";

    

    Course newCourse; //initialize a new course 

    newCourse.setName("Computer Science II"); //assign a new name 
    newCourse.setCourseNum(2000); //assign a new course number 
    newCourse.printCourse(); //outputs the course infomation on a new line 

    Course anotherOne; //create a second course object
    anotherOne.setName("Science Computer I"); //assign a new name 
    anotherOne.setCourseNum(9000); // assign a new number 
    anotherOne.printCourse();   //output course information 

   myPointer->setStudentInfo("Archaeology", myFirst, myLast);

    newCourse.addToRoster(myPointer);

    myPointer->printStudent();

    newCourse.printRosterNames();



    
 

    return 0;
}