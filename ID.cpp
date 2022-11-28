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
        s = letter + to_string(num);
        fullID = s;
    }

string ID::getID()
{
    // create string variable, return full ID as string
    return fullID;
}
