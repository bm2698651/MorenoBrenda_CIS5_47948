/*Change for a Dollar Game
 *Create a change- counting game that gets the user to enter the number of 
 *coins required to make exactly one dollar. The program should ask the user to 
 *enter the number of pennies, nickels, dimes, and quarters. If the total value 
 *of the coins entered is equal to one dollar, the program should congratulate 
 *the user for winning the game. Otherwise, the program should display a 
 *message indicating whether the amount entered was more than or less than one 
 *dollar. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on September 30, 2018, 8:15 PM
 * Purpose: Change for a Dollar Game
 */

#include <iostream>                                         //I/O Library
#include <iomanip>                                          //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, no Global Variables,
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main()
{
    //Declares all Variables 
    int pennies, nickels, dimes, quarters, total;           //Variables
    
    //Obtains the input from the user
    cout << "Enter the number of pennies." << endl;
    cin >> pennies;
    cout << "Enter the number of nickels." << endl;
    cin >> nickels;
    cout << "Enter the number of dimes." << endl;
    cin >> dimes;
    cout << "Enter the number of quarters." << endl;
    cin >> quarters;
    
    //Calculates the total amount
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
    
    //Displays and determines the total amount
    cout << setprecision(2) << fixed;
    if(total == 1.00)
        cout << "Congratulation! The total amount was $1." << endl;
    else if(total > 1.00)
        cout << "The total amount does not equal $1. Try again." << endl;
    else if (total < 1.00)
        cout << "The total amount does not equal $1. Try again." << endl;
    
    //Exit
    return 0;
}
