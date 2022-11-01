#include <iostream> 
#include <cstring>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

//declare struct Timer
struct Timer {
	//declare int variables for hours, minutes, and seconds	
int hours;
int minutes;
int seconds;
};
//declare compareTimes function
int compareTimes(Timer timer1, Timer timer2) {
	//compare the hours, then minutes, and then seconds
	
    if (timer1.hours < timer2.hours) 
    {
		return -1;
	}
	
    else if (timer1.hours == timer2.hours) {
		
        if (timer1.minutes < timer2.minutes) 
        {
			return -1;
		}
		else if (timer1.minutes == timer2.minutes) {
			if (timer1.seconds < timer2.seconds) 
            {
				return -1;
			}
			else if (timer1.seconds == timer2.seconds) 
            {
				return 0;
			}
			else { //timer1.seconds > timer2.seconds
				return 1;
			}
		}
		else { //timer1.minutes > timer2.minutes
			return 1;
		}
	}
	else { //timer1.hours > timer2.hours
		return 1;
	}
}
//declare findMinMaxTimer function
void findMinMaxTimer(Timer* array, int size, Timer& min, Timer& max) {
	//initialize min and max to the first element in the array
	
    min = array[0];
	max = array[0];
	//compare each element in the array to find the min and max
	
    for (int i = 1; i < size; i++) {
		if (compareTimes(array[i], min) < 0) 
        //current element is less than min
        {
			min = array[i];
		}
		else if (compareTimes(array[i], max) > 0) { //current element is greater than max
			max = array[i];
		}
	}
}
//declare createTimerArray function
Timer* createTimerArray(int size) {
	//create a dynamic array of Timer structs
	
    Timer* array = new Timer[size];
	string s;
	//read in values for each Timer in the array
	
    for (int i = 0; i < size; i++) {
		
        cout << "Enter a Timer as hours:minutes:seconds(h:m:s)? ";
		cin>>s;
		
        vector<int> vect;
		stringstream ss(s);
		
        for (int x; ss >> x;) 
        {
			vect.push_back(x);    
			if (ss.peek() == ':')
				ss.ignore();
		}
	   
        array[i].hours =  vect[0];
    	array[i].minutes =  vect[1];
    	array[i].seconds =  vect[2];
		//check for valid input
		
        if (array[i].hours < 0 || array[i].minutes < 0 || array[i].seconds < 0 || array[i].minutes >= 60 || array[i].seconds >= 60) 
        {
			cout << "Invalid Timer!" << endl;
			i--;
        //decrement i so that the user can input again
		}
	}
	//return the address of the array
	return array;
}
int main() {
	//declare variables for the size of the array, the array, and the min and max Timers
	
    int size;
	Timer* array;
	Timer min;
	Timer max;
	//get the size of the array from the user
	
    do {
		cout << "How many Timers do you need? ";
		cin >> size;
		//check for valid input
		if (size <= 0) 
        {
			cout << "Enter a positive value!" << endl;
		}
	} 
    while (size <= 0);
	//create the array
	
    array = createTimerArray(size);
	//find the min and max Timers
	
    findMinMaxTimer(array, size, min, max);
	//print the min and max Timers
	
    cout << "The minimum Timer is: " << min.hours << ":" << min.minutes << ":" << min.seconds << endl;
	cout << "The maximum Timer is: " << max.hours << ":" << max.minutes << ":" << max.seconds << endl;
	//free the array
	
    delete [] array;
	
    return 0;
}
