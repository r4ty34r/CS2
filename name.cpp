//Elise, Matea, Thomas, Cristian

#include "name.h"
#include <string>
#include <iostream>
using namespace std;

Name::Name(){ //default
    firstN = "First";
    lastN = "Last";
}

Name::Name(string first, string last){
    firstN = first;
    lastN = last;
}

void Name::printName() // Public member function that will print the person's full name

{
    cout << lastN << ", " << firstN << endl;
}

//set functions
void Name::setName(string first, string last) //sets entire name given two strings
{
    firstN = first;
    lastN = last;
}

void Name::setFirst(string first) // set member function that changes the value of firstN
{
    firstN = first;
}

void Name::setLast(string last) // set member function that changes the value of lastN
{
    lastN = last;
}

// public member functions that allow us to get the values of the private data members
string Name :: getName() {
    return lastN + ", " + firstN;
}

string Name :: getFirst() //retrieves firstN
{
    return firstN;
}

string Name :: getLast() //retrieves lastN
{
    return lastN;
}

string Name :: removePunct1(string first) // added by Desilee Roman takes first name and removes punctuation
{
        int length1 = first.size();
        int i;
        int j;
        string string1;

        for(i = 0; i < length1; i++)
        {
                if(isalpha(first[i]))
                {
                        string1 += first[i];
                }

        }
        if(islower(string1[0])) // if the first letter is lowercase it converts it to uppercase
	    {
		    string1[0] = toupper(string1[0]);
	    }

	    int length2 = string1.size();
	    for(int j = 1; j < length2; j++)
	    {
		    if(isupper(string1[j]))
		    {
			    string1[j] = tolower(string1[j]);
		    }
	    }
        return string1;
}
string Name :: removePunct2(string last) // added by Desilee Roman takes last name and removes punctuation
{
        int length2 = last.size();
        int j;

        string string2;

        for(j = 0; j < length2; j++)
        {
                if(isalpha(last[j]))
                {
                        string2 += last[j];
                }
        }
        if(islower(string2[0]))
	    {
		    string2[0] = toupper(string2[0]);
	    }

	    int length4 = string2.size(); 
	    for(int i = 1; i < length4; i++)
	    {
		    if(isupper(string2[i]))
		    {
			    string2[i] = tolower(string2[i]);
		    }
	    }
        return string2;
}
