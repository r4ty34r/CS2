#ifndef Date_H
#define Date_H
#include<string>
using namespace std;

class Date{
public:
        //11-27 OB: added default constructor 
        Date();
        Date( int m, int d, int y) {
                month = m;
                day = d;
                year = y;
        }
        Date(int m, int y) {
                month = m;
                day = 1;
                year = y;
        }

        int getDay(); //accessor for day
        int getMonth(); //accessor for month
        int getYear(); //accessor for year
        string getSeason(); //accessor for season
        void setDate(int m, int d, int y);
        void setGradDate(int m, int y);
        void setSeason(); // mutator for season
        void Print(); //prints the date in form “month/date/year”
        void printSeasonAndYear(); //prints the season and year of the date
        bool isDateValid();
        bool isGradDateValid();
private:
        int month;
        int day;
        int year;
        string season;
};
#endif