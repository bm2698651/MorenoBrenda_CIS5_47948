/*Minimum/Maximum
 * Write a program that asks the user to enter two numbers. 
 * The program should use the conditional operator to determine which number is 
 * the smaller and which number is larger. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on September 29, 2018, 6:36 PM
 * Purpose: Minimum/Maximum
 */

#include <iostream>                                 //I/O Library 
#include <iomanip>                                  //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here 
int main()
{
    //Declares all Variables here
    double number1, number2;                        //Two numbers
  
            
    //Obtains the two input numbers         
    cout << "Enter a number." << endl;
    cin >> number1;
    cout << "Enter another number." << endl;
    cin >> number2;
    
    //Displays and determines which number is greater
    if (number1 > number2)
        cout << number1 << " is greater than " << number2 << endl;
    else
        cout << number2 << " is greater than " << number1 << endl;
    
    
    //Exit
    return 0;
}
