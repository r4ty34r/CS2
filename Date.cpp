#include"Date.h"
#include<iostream>
#include<string>
using namespace std;

//11-27 OB: assigned default constructor values 
Date::Date()
{
        month = 1;
        day = 1;
        year = 1;
        season = "null";
}

void Date::setDate(int m, int d, int y) //sets user input into date in m/d/y
{
        month = m;
        day = d;
        year =y;
}

void Date::setGradDate(int m, int y)
{
        month = m;
        year = y;
}

//mutator sets the season of the month of date; Winter (December, January, February), Spring (March, April, May), Summer (June, July, August), or Fall (September, October, November)

//11-27 OB: note that SetSeason takes no parameters
//      it is called differently in /getGradDate() function in Student.cpp file
void Date::setSeason()
{
        if(getMonth() == 12 || getMonth() == 1 || getMonth() == 2)
                season = "Winter";
        else if(getMonth() >= 3 && getMonth() <= 5)
                season = "Spring";
        else if(getMonth() >= 6 && getMonth() <= 8)
                season = "Summer";
        else
                season = "Fall";
}

bool Date::isDateValid() //checks month # to see how many days it has
{
        if (getMonth() < 0 || getMonth() > 12)//checks if # is a valid month
        {
                return false;
        }

        if (getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 || getMonth() == 10 || getMonth() == 12) // for months that have 31 days
        {
                if (getDay() < 0 || getDay() > 31) //only accepts days from 1 - 30
                {
                        return false;
                }
        }
        else if ( getMonth() == 2) // febuary
        {
               if (getYear()%4==0) //checks if its leap year
               {
                       if(getDay() < 1 || getDay() > 29) // leap year day range
                       {
                               return false;
                       }
                }
               else
               {
                       if (getDay() < 1 || getDay() > 28) //non leap year day range
                       {
                               return false;
                       }
                }
        }
        else
        {
                if (getDay() < 1 || getDay() > 30) //all other months
                {
                        return false;
                }

        }
        return true;
}

bool Date::isGradDateValid()
{
        if (getMonth() < 0 || getMonth() > 12)//checks if # is a valid month
        {
                return false;
        }
        else
        {
                return true;
        }
}

int Date::getDay()
{ //accessor for day
        return day;
}

int Date::getMonth()
{ //accessor for month
        return month;
}

int Date::getYear()
{ //accessor for year
        return year;
}

string Date::getSeason()
{ //accessor for season
        return season;
}

void Date::Print()
{ //prints the date in form “month/date/year”
        cout << getMonth() << "/";
        cout << getDay() << "/";
        cout << getYear() << endl;
}

void Date::printSeasonAndYear()
{ //prints the season and year of the date
        cout << getSeason() << " " << getYear();
}