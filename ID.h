//Tu Nguyen
#ifndef ID_h
#define ID_h
#include <iostream>
using namespace std;

// create an ID class
// generate a random 8 digit num and cout the char and ID together

class ID
{
public:

    static int num; // static int to start ID number
    ID();

    //compare IDs
    string getID(); // return full ID number as a string
    void printID(); // print full ID number

private:
    char letter = 'A'; // Letter to start ID

    string fullID; // variable to combine the letter and random numbers
};

#endif