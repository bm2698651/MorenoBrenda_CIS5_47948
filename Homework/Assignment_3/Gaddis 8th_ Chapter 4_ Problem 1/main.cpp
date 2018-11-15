/*Minimum/Maximum
 * Write a program that asks the user to enter two numbers. 
 * The program should use the conditional operator to determine which number is 
 * the smaller and which number is larger. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 29, 2018, 6:36 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double number1, number2;        //variables
  
            
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
    
    return 0;
}
