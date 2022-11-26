//Student.h

#ifndef Student_h
#define Student_h
//11/18/22 Aaron Li added guardrails
#include <iostream>
#include "ID.h"
#include "Date.h"
#include "name.h"
#include <string>
using namespace std;

class Student
{
        public:
        //constructor
            Student();

        //mutators
            void setGPA(double GPA);
            void setMajor(string major);
            void setMinor(string minor);

        //accessors
            ID getID();
            Name getName();
            // removed Date getBirthDay();
            Date getGradDate();
            //OB: added string param to getMajor to match definition in Student.cpp file
            string getMajor(string &major);
            //OB: added string param to getMinor to match definition in Student.cpp file
            string getMinor(string &minor);
            double getGPA();
            void printStudent();
            Student setStudentInfo();

        private:
            string major, minor;
            double GPA;
            ID studentID;
            Name studentName;
            Date gradDate;
            //removed Date birthDay;
};
#endif