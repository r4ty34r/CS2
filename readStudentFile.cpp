// Christian Ahrem, Taylor Fox
// With help from Erik Brown
// 11/18/2022
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Student.h"

using namespace std;
 

bool readStudentFile(string fileName, vector <Student> &students)  // passing the vector of students by reference
{
	string line, word; // declaring line and word
 
    	fstream file (fileName, ios::in); // opens file
    	if(file.is_open()) // if file open is successful
    	{
        	while(getline(file, line)) // reads until out of lines on csv
        	{
            
            		vector<string> row; // string vector for row
            
            		stringstream str(line); // turns row into string
 
            		while(getline(str, word, ',')) // adds column (marked by ',') to the row vector
                		row.push_back(word);
            
            		for (int i=0; i < row.size(); i++) // loops through columns of row
            		{
                		Student temp;
                		switch (i) 
				{
                    			case 1: // case for setName
                        			temp.setName(row[i]);
                        			break;
                    			case 2: // case for setEntryDate
                        			temp.setEntryDate(row[i]);
                        			break;
                    			case 3: // case for setGradDate
                        			temp.setGradDate(row[i]);
                        			break;
                    			case 4: // case for setMajor
                        			temp.setMajor(row[i]);
                        			break;
                    			case 5: // case for setMinor
                        			temp.setMinor(row[i]);
                        			break;
                    			case 6: // case for setCourses
						string course;
						vector<string> courseList;
						stringstream courseStream(row[i]);
                        			while(getline(courseStream, course, ';')) // creates courseList vector
                            				courseList.push_back(word);
                        			temp.setCourses(courseList);
                        			break;
                		}
                		students.push_back(temp); // adds entry to students vector
            		}
        	}
    		return true;
    	}
    	else
    	{
	    	return false;
    	}
}	

bool closeStudentFile(std::string fileName) 
{
	return false;
}

