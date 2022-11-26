//Elise, Matea, Thomas, Cristian

#ifndef name_h
#define name_h
#include <string>
using namespace std;
//Name.h

class Name
{
    public:
        void printName(); // public member function to print the name in the form last, first
        string getName(); // public member function to get the name
        string getFirst(); // accesses the value in the object to get the first name
        string getLast(); // accesses the value in the object to get the last name
        string removePunct1(string first); // added by Desilee Roman
        string removePunct2(string last); // added by Desilee Roman
        void setName(string first, string last); // set the first and last name using a string
        void setFirst(string first); // function that changes the values in the object
        void setLast(string last); // Function that changes the values of the name in the object
        Name(); // a default constructor
        Name(string first, string last); //

    private:
// the private member variables for the first and last names
        string firstN;
        string lastN;
};



#endif /* name_h */