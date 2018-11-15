/*Ocean Levels
 * Assuming the ocean's level is currently rising about 1.5 millimeters per year, 
 * write a program that displays a table showing the number of millimeters that 
 * the ocean will have a risen each year for the next 25 years.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 18, 2018, 5:01 PM
 * Purpose: Ocean Levels
 */

#include <iostream>                             //I/O Library

using namespace std;

//User Libraries Here

//Global Constants only, No Global Variables
//Like Pi, e, Gravity, or conversions

//Function Prototypes Here

//Program Begins Here
int main()
{
    double level = 0;                           //Starting Value
    int years = 25;                             //Ending Value
    
    //Displays and calculates the table
    for (int n = 1; n <= years; n++)
    {
        level += 1.5;
        cout << "Year " << n << ": " << level << "mm" << endl;
    }
    
    //Exit
    return 0;
}
