#include "Student.h"
#include <iostream>
#include "Date.h"
#include "ID.h"
#include "Name.h"
#include <string>

//.cpp file has the function definitions

//asks user to input GPA as a double
void Student::setGPA(double GPA)
{
    cout << "What is the student's GPA: ";
    cin >> GPA;
}

//accessor for program to get GPA
double Student::getGPA()
{
        return GPA;
}

//Sets the major and asks the user how many majors does the student have
//If the student has more than one major, then it will receive input of two majors
//Else if the student only has one major, then it will receive an input of one major

void Student::setMajor(string major)
{
        string major2;
        int majorNum;
        cout<<"How many Majors does the student have?";
        cin>>majorNum;
        if(majorNum==2)
        {
                cout<<"What is the student’s majors?: ";
                cin>>major>>major2;
        }
        else
                cout<<"What is the student’s major?: ";
                cin>>major;

}

//accessor so program can see student’s major

string Student::getMajor(string& major)
{
return major;
}

//11/22/22 Grace Williams
//asks the user whether the student is pursuing a minor; if they are, the user is prompted to input the minor
void Student::setMinor(string minor)
{
     char pursueMinor;
     cout << "Is the student pursuing a minor? Y for yes, N for no. " << endl;
     //OB: fixed pursueMinor typo
     cin >> pursueMinor;
     if (pursueMinor == 'Y' || pursueMinor == 'y')
     {
          cout << "What is the student’s Minor:  ";
          cin >> minor;
     }
     else
     {
        minor = "This student is not pursuing a minor";
     }
}

//accessor for getting the student’s minor
string Student::getMinor(string& minor)
{
                return minor;
}

//11/22/22 Grace Williams
//asks about the year and season of the student’s graduation date
//creates an object, grDate, of class Date, to hold the graduation date info
//returns the grDate info as a date
Date Student::getGradDate()
{
        int year;
        int aMonth = 0;
        
        cout << "In what year does the student graduate?" << endl;
        cin >> year;
        //11-27 OB: added input for month in order to call grDate with full constructor
        cout << "In what month does the student graduate?" << endl;//11-27 OB: see Date.cpp/setSeason()
        //cout << "In what season does the student graduate?" << endl;//OB: commented out 

        cin >> aMonth; //11-27 OB: changed season to aMonth 
        
        //11-27 OB: commented out the following lines, should be called with:  grDate.setSeason(season)
        /*
         Date grDate;
        grDate.season = season;
        grDate.year = year;
        */           

        Date grDate;
        grDate.setGradDate(aMonth, year);
        grDate.setSeason();
        
        return grDate;
}


//Aaron Li
//this was removed from code
// asks the user for the student’s birth year, month, and day, inputting them into separate variables
/*Date Student::getBirthDate()
{
        int year;
        int month;
        int day;
        cout << “What year was the student born?” << endl;
        cin >> year;
        cout << “What month was the student born?” << endl;
        cin >> month;
        cout << “What day was the student born?” << endl;
        cin >> day;

        //seperate object that contains each element of the birthday (day/month/year)

        Date BrDate;
        BrDate.year = year;
        BrDate.month = month;
        BrDate.day = day;

        Return BrDate;
}
*/
//Prints out the elements of Student, including: Name, ID, Birthday, Expected Graduation Date, Major, and Minor
// (optional)
//11/22/22 Grace Williams


//11-27 OB: outputting the methods should be done with (); 
void Student::printStudent()
{
cout << "The student’s information is as follows: "<< endl;
cout << "Name: " << Student::Name.firstN << " " << Student::Name.lastN << endl;
cout << "ID Number: A" << Student::ID.num << endl;
cout << "Birthday: " <<Student::birthDate.day << "/" << Student::birthDate.month << "/" << Student::birthDate.year << endl;
cout << "Graduation Time: " << Student::gradDate << endl;
cout << "Major: " << Student.major << endl;
cout << "Minor, if applicable: " << Student.minor << endl;

}

ID::setID(){             //function to combine the character and the random number
num+=1;
string s;
        s = letter + to_string(num);
        fullID = s;
}

ID::getID(){
        //create string variable, return full ID as string
        return fullID;
}


//11/22/22 Grace Williams
//creating a sample student to which we can assign all the information
Student Student::setStudentInfo()
{
Student sampleStudent;

sampleStudent.studentName = student::getName();
sampleStudent.gradDate = Student::getGradDate();
sampleStudent.birthDay = Student::getBirthDate();
sampleStudent.major = Student::getMajor();
sampleStudent.minor = Student::getMinor();
sampleStudent.ID = Student::getID();
sampleStudent.GPA = Student::getGPA();

        return sampleStudent;
}
