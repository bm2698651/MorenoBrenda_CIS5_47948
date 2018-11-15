/*Calories Burned
 * Running on a particular treadmill you burn 3.6 calories per minute. 
 * Write a program that uses a loop to display the number of calories burned 
 * after 5, 10, 15, 20, 25, and 30 minutes.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 18, 2018, 5:39 PM
 * Purpose: Calories Burned
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
    float calories = 0;
    float cal_burned = 3.6;
    
    //Displays and calculates the table
    for (int n = 10; n <= 30; n += 5)
    {
        calories = n * cal_burned;
        cout << "You've burned " << calories << " calories in " << n << " minutes." << endl;
    }
    
    //Exit 
    return 0;
}