//============================================================================
// Name        : COMP 2011.cpp
// Language    : C++
// Author      : qwuae@ust.hk
// Version     : beta 1.0
// Created	   : On 12/02/16 01:18
// Copyright   : Copyright © 2016 qwuae@ust.hk. All rights reserved.
// Description : C++ lab1 for comp 2011
//============================================================================
#include <iostream>
using namespace std;
int main()
{
    int hour, minute, duration; // Define 3 variables that will define the time
    cout << "Dear master please create an event for our future"<<endl;
    do
    {
        cout << "Please enter the starting hour (0 - 23)"<<endl;
        cin>>hour;
        cout << "Please enter the starting minutes (0 - 59)"<<endl;
        cin>>minute;
        if (hour<0||hour>23||minute>59||minute<0)
        {
            cout << "Master,there is error in the input, please tell me again"<<endl;
        }
    } 
    while (hour<0||hour>23||minute>59||minute<0);
    do
    {
        cout << "Please enter the duration (hours)"<<endl;
        cin>>duration;
        if (duration<=0) {
            cout << "Master,duration cannot be zero or negative"<<endl;
        }
    } while (duration<=0);
    
    cout <<"My master,The event ends at "<< (hour+duration)%24<<":"<<minute<<endl;
    cout << (hour+duration)/24<<" days later"<<endl;
    return 0;
}
