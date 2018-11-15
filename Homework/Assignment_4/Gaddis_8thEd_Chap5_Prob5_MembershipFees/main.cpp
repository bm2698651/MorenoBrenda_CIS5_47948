/*Membership Fees Increase
 * A country club, which currently charges $2,500 per year for membership, has
 * announced it will increase its membership fee by 4% each year for the next
 * six years.
 * Write a program that uses a loop to display the projected rates for the next 
 * six years.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 18, 2018, 6:26 PM
 * Purpose: Membership Fees Increase
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
    //Declares all variables
    float membership = 2500;
    const float FEE = 0.04;
    const int YEARS = 6;
    
    //Display
    cout << "The increase of membership fee every year for six years." << endl;
    
    //Displays and calculates table
    for (int n = 1; n <= YEARS; n++)
    {
        membership = membership + (membership * FEE);
        cout << "Year " << n << ": " << membership << endl;
    }
    
    //Exit
    return 0;
}