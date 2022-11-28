//Tu Nguyen, Oscar Bruno

#include <iostream>
#include <string>
#include "ID.h"

using namespace std;

int ID::num = 1000000;

ID::ID()
    {
        num += 1;
        string s;
        s = letter + to_string(num); //concatenates char 'A' with 'num'
        fullID = s; //assigns full ID to private member 
    }

string ID::getID()
{
    return fullID; 
}
