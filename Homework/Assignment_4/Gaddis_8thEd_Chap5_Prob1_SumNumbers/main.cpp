/*Sum of Numbers
 * Write a program that asks the user for a positive integer value. The program
 * should use a loop to get the sum of all the integers from 1 up to the number 
 * entered. For example, if the user enters 50, the loop will find the sum of 
 * 1,2, 3,4 ... 50.
 * 
 * Input Validation: Do not accept a negative starting number.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 18, 2018, 3:30 PM
 * Purpose: Sum of Numbers
 */

#include <iostream>                                 //I/O Library
#include <iomanip>                                  //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Varaibles
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Begins Here
int main ()
{
    int num = 0;                                 //Starting Value
    int sum = 0;                                 //Ending Value
    
    //Obtains input from user
    cout << "Enter a positive integer to determine its value." << endl;
    cin >> num;
    
    //Obtains the minimum and maximum value to display
    while (num < 0)
    {
        cout << "ERROR: Program does not accept negative integers. " << endl;
        cin >> num;
    }
    
    //Displays and calculates the table
    for (int n = 1; n <= num; n++)
    {
        sum += n;
    }
    cout << "The total sum is " << sum << endl;
    
    
    //Exit
    return 0;
}
