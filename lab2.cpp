//============================================================================
// Name        : lab2.cpp
// Language    : C++
// Author      : qwuae@ust.hk
// Version     : beta 1.0
// Created	   : On 12/02/16 01:18
// Copyright   : Copyright © 2016 qwuae@ust.hk. All rights reserved.
// Description : C++ lab1 for comp 2011
//============================================================================

#include <iostream>
using namespace std;


/**
 * You are required to complete the following function which prompt the user to enter a number, 
 * output "Error, please enter again! The input should be not smaller than X or larger than Y" if 
 * there is any error on the input. Note that X and Y shall be replaced by the value of min and
 * max.
 * It should also return the valid number that the user types in.
 */
int input_valid_number(int min, int max) {
    // @TODO: type your code here
    int x;
	while(true)
   {

	cin>>x;
	if (min<=x&&x<=max)
	{
		return x;
		break;
	}
	else
	cout<<"Error, please enter again! The input should be not smaller than X or larger than Y";
   }
    
}

/**
 * This function is given, which is modified the Lab 1.
 * You can also replace this by your lab 1 or keep it as it is.
 *
 */
void create_event() {
	int start_hour;
	int start_minute;
	int duration;
	cout << "Create an event" << endl;

	cout << "Please enter the starting hour (0 - 23):";
	start_hour = input_valid_number(0, 23);
	cout << "Please enter the starting minutes (0 - 59):";
	start_minute = input_valid_number(0, 59);
	cout << "Please enter the hour duration. (1 - 100):";
	duration = input_valid_number(1,100);

	cout << "The event ends at:   " << (start_hour + duration) % 24 << ":"
			<< start_minute << endl;
}

/**
 * You will need to add some extra function here in order to complete the task.
 *
 */


//@TODO: Add your function(s) here

int main() {
    create_event();
    int total_guests = 0;
    //@TODO: Add your code here
    cout << "How many friends you wish to invite (1 - 50)?";
    total_guests=input_valid_number(1,50);
    
    int a=0,aa=0;
    for (int i = 0;i < total_guests; ++i)
    {
    	    cout << "---------------------------------------"<<endl;
    	    cout<<"Dear Friend #"<<i<<","<<endl;
   			cout<<"You are coordinately invited to the event hosted by COMP2011. RSVP"<<endl;
   			cout<<"Sincerely, "<<endl;
   			cout<<"COMP2011 TAs"<<endl;
    	    cout << "---------------------------------------"<<endl;
    	    a=input_valid_number(0,10);
    	    aa+=a;
/* code */
    }
    total_guests=aa;
    cout << "There are " << total_guests << " people attending the event." << endl;
}
