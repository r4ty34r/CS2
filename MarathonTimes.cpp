#include <iostream>
using namespace std;

struct Timer
{
    int hours;
    int minutes;
    int seconds;
};


int compareTimes (Timer timerStruct1, Timer timerStruct2) //return an int based on the faster or slower time
{
    if (timerStruct1.hours == timerStruct2.hours) //if the hours are equal, move on to minutes
    {
        cout << "\nthe hours are the same, moving on to minutes";

        if (timerStruct1.minutes == timerStruct2.minutes)//if the minutes are equal move on to seconds 
        {   
            cout << "\nThe minutes are the same, moving on to seconds";
            if (timerStruct1.seconds == timerStruct2.seconds)//if the seconds are equal, the timers are the same
            {
                cout << "\nThe timers are exactly the same";
                return 0;
            } else if (timerStruct1.seconds != timerStruct2.seconds)
            {   
                cout <<"\nThe seconds are diferent";
                return timerStruct1.minutes-timerStruct2.minutes; //returns time of struct 1-2, positive # = struct 1 is slower     
            }
	    } else if (timerStruct1.minutes != timerStruct2.minutes)
    		{
                cout <<"\nThe minutes are diferent";
        		return timerStruct1.minutes-timerStruct2.minutes; //returns time of struct 1-2, positive # = struct 1 is slower
    		}
        
    } else if (timerStruct1.hours != timerStruct2.hours)// if the hours are not equal, return the difference 
    {
        cout <<"\nThe hours are diferent";
        return timerStruct1.hours-timerStruct2.hours; //returns time of struct 1-2, positive # = struct 1 is slower
    }
    return 0;
}


//readtimer to fill a timer struct
Timer readTimer()
{
    Timer aStruct;
    //read in the timer
    int hour; 
    int min;
    int sec;
    cout << "Enter a timer as hours:minutes:seconds(h:m:s) ";
    cin >> hour;
    cin >> min;
    cin >> sec;

    //set user input values to member values of timerStruct
    aStruct.hours = hour;
    aStruct.minutes = min;
    aStruct.seconds = sec;
    return aStruct;
}

/*Timer findMinMaxTimer(Timer timerarray[])
{
    Timer min;
    
    //from an array of structs, find the min and max timers in the given params

}*/

//createtimerarray
Timer* createTimerArray(int &size)
{	
	// Todo: Write a statement to dynamic allocate memory for the array. 
    cout << "\nInitializing dynamic array of structs";

    Timer *arraypointer = new Timer[size]; //initialize a dynamic array of Struct type
    
    

	// Todo: Write a loop to read the values and store them in the array
    for (int index = 0; index < size; index++)
    {
        arraypointer[index] = readTimer(); // value at index should be read in with readTimer
    }

    //printing array 
    cout << "Trying to print array" << endl;

    for (int j = 0; j < size; j++)
    {
        cout << "\nPrinting struct at position: " << j << endl;

        cout << "\nThe hours of the timer is: "<< arraypointer->hours << endl;
        cout << "\nThe minutes of the timer is: " << arraypointer->minutes << endl;;
        cout << "\nThe seconds of the timer is: " << arraypointer->seconds << endl;
        arraypointer++;
    }


    //comparing the times

    Timer *min = arraypointer; //create a minimum timer variable for fastest time
    Timer *max = arraypointer; //create a maximum timer variable for slowest time
    cout << min->hours;
    
    //loop through array 
    for (int i = 0; i < size; i++)
    {
        int x; //variable to hold return value from comparetimes functions
        x = compareTimes(arraypointer[i],arraypointer[i+1]); // set x = to the return value of comparing the times in 2 arrays, starting with 1 and 2 
        if (x > 0) //if the return value is positive, structure i+1 is faster (lower time) than structure i 
        {
            min->hours = (arraypointer+1)->hours;
            min->minutes = (arraypointer+1)->minutes;
            min->seconds = (arraypointer+1)->seconds;
        }

        if (x < 0) //if the return value is negative, structure i is faster (lower time) than structure i+1
        {
            min->hours = arraypointer->hours;
            min->minutes = arraypointer->minutes;
            min->seconds = arraypointer->seconds;

        } else 
        
        arraypointer++; //move on to the next array value in memory 
    }
    cout << "\nthe fastest timer is: " << min->hours << min->minutes << min->seconds;
    cout << "\nthe slowest timer is: " << max->hours << max->minutes << max->seconds;
    

	return arraypointer; //returns the new dynamic array 
}


void newSameStruct (Timer &timerStruct1, Timer &timerStruct2) //function to copy values from 1 struct to another 
{
    cout << "\nCopying values to new struct";
    timerStruct2.hours = timerStruct1.hours;
    timerStruct2.minutes = timerStruct1.minutes;
    timerStruct2.seconds = timerStruct1.seconds;
}

void printStruct(Timer aTimerStruct)
{
    cout << "\nOutputting struct values: ";
    cout << "\nHours for first struct: " << aTimerStruct.hours;
    cout << "\nMinutes for first struct: " << aTimerStruct.minutes;
    cout << "\nSeconds for first struct: " << aTimerStruct.seconds;
}

int main()
{
    //init 2 structs
	Timer realtimes; 
	Timer secondTimer; 

    //init memory to hold user input
   

    //newSameStruct(realtimes, secondTimer); // assigns exact same values from the user input into a second struct
    //printStruct(realtimes); //outputs Timer struct values

    
    //comparing the two structs 
    
    /*cout << "Do you want to set up a timer? ";
    char response;
    cin >> response;
    if (response == 'y')
    {
        readTimer(secondTimer);
        printStruct(secondTimer);
        cout << "\nComparing structs ...";
        compareTimes(realtimes, secondTimer);
    }else 
    {
        cout << "\n shifting gears";
        cout << "\n";
        cout << "\n";
*/
	int size;
	do {
		cout << "How many timers do you need? ";
		cin >> size;
	} while (size <= 0);
        
        createTimerArray(size);
    

        
       // cout << "Moving on to dyanamic array...";
        //cout << "Assigning function return to pointer... " <<endl;

        /*
        
        cout << "Attempting to output return value: ";
        cout << "Address of the pointer in main is: " << dynamicpointer; 
        cout << "Contents of the same pointer is: " << *dynamicpointer;
        */
        
    

    return 0;
}
