/*Distance Traveled
 * The distance a vehicle travels can be calculated as follows:
 * 
 * distance = speed * time
 * 
 * For example, if a train travels 40 miles per hour for 3 hours, the distance 
 * traveled is 120 miles.
 * Write a program that asks the user for the speed of a vehicle and how many 
 * ours it has traveled. The program should then use a loop to display the 
 * distance the vehicle traveled for each hour of that time period.
 * 
 * Here is an example of the output:
 * Hour  Distance Traveled
 * ---------------------------
 * 1        40
 * 2        80  
 * 3        120
 * 
 * Input Validation: Do not accept a negative number for speed and do not accept 
 * any value less than 1 for time traveled. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 18, 2018, 6:53 PM
 * Purpose: Distance Traveled 
 */

#include <iostream>                                 //I/O Library

using namespace std;

//User Libraries Here

//Global Constants only, No Global Variables
//Like Pi, e, Gravity, or conversions

//Function Prototypes Here

//Program Begins Here
int main ()
{
    //Declares all Variables
    float speed;                                //Starting Value
    int time;                                   //Starting Value
    float distance;                             //Ending Value
    
    //Obtains input from user
    cout << "What is the speed of the vehicle? " << endl;
    cin >> speed;
    cout << "For how many hours did the vehicle travel? " << endl;
    cin >> time;
    
    //Obtains the minimum and maximum value to display
    while (speed <= 0)
    {
        cout << "ERROR: Speed must be greater than zero. " << endl;
        cin >> speed;
    }
    
    while (time <= 1)
    {
        cout << "ERROR: Time must be greater than one. " << endl;
        cin >> time;
    }
    
    //Displays and calculates the table
    cout << "Hour" << "\t" << " Distance Traveled" << endl;
    cout << "----------------------------" << endl;
    
    for (int t = 1; t <= time; t++)
    {
        distance = speed * t;
        cout << t << "\t\t" << distance << endl;
    }
    
    //Exit
    return 0;
}