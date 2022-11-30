#include "Course.h"
#include "Student.h"
#include <iostream> 
#include <vector> 

using namespace std;

void pointerprint (Student* aPointer)
{
    aPointer->printStudent();
}

//TODO: 
//      include student class, test out class roster 

//OB: created driver program 
int main(){

    cout << "program compiled successfully!" << endl;
    
    Student *myPointer = new Student; 
    string myFirst = "Joe";
    string myLast = "Smith";

    
    Course newCourse;
    cout << "course initialized successfully!" << endl;

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
    cout << endl;
    cout << "Printing the roster names now: " << endl;
    newCourse.printRosterNames();

    Student * anotherPointer = new Student; 

    string newfname, newlname, major; //variables for the next student object 
    newfname = "John";
    newlname = "Doe";
    major = "Political Science";


    anotherPointer->setStudentInfo(major, newfname, newlname);
    newCourse.addToRoster(anotherPointer);

    cout << "Calling print roster a second time: " << endl;
    newCourse.printRosterNames();

    cout << "\nDone testing." << endl;

    return 0;
}
