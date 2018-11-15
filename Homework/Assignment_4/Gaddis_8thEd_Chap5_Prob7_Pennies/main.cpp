/*Pennies for Pay
 * Write a program that calculates how much a person would earn over a period of 
 * time if his or her salary is one penny the first day and two pennies the 
 * second day, and continues to double each day. The program should ask the user 
 * for the number of days. Display a table showing how much the salary was for 
 * each day, and then show the total pay at the end of the period. The output 
 * should be displayed in a dollar amount, not the number of pennies. 
 *  
 * Input Validation: Do not accept a number less than 1 for the number of days worked.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 18, 2018, 8:53 PM
 * Purpose: Pennies for Pay
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
    //Declares all Variables
    int days1 = 1;                             //Starting Value
    double total = 0.0;                        //Ending Value
    double dollar = 1.0;                       //Dollar Amount
    double days2 = 0.0;                        //Ending Value
    
    //Obtains input from user
    cout << "Enter the number of days." << endl;
    cin >> days1;
    
    //Obtains the minimum and maximum value to display
    while (days1 < 1)
    {
        cout << "ERROR: Number of days must be greater than 1." << endl;
        cin >> days1;
    }
    
    //Displays and calculates the table
    for (int n = 1; n <= days1 ; n++)
    {
        days2 = dollar / 100;
        total += days2;
        dollar *= 2;
        cout << "Day " << n << ": " << days2 << endl;
    }
    
    //Displays final amount 
    cout << "Total salary: " << total << endl;
    
    
    //Exit
    return 0;
}
