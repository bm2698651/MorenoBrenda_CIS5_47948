/*Charge Account Validation
 * Write a program that lets the user enter a charge account number. The program 
 * should determine if the number is valid by checking it in the following list:
 * 
 * 5658845  4520125 7895122 8777541 8451277 1302850
 * 8080152  4562555 5552012 5050552 7825877 1250255
 * 1005231  6545231 3852085 7576651 7881200 4581002
 * 
 * The list of numbers above should be initialized in a single-dimensional array.
 * A simple linear search should be used to locate the number entered by the user. 
 * If the user enters a number that is in the array, the program should display a 
 * message saying the number is valid. If the user enters a number that is not in 
 * the array, the program should display a message indicating the number is invalid. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 30, 2018, 8:31 PM
 * Purpose: Charge Account Validation
 */

#include <iostream>                                                             //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Declare all variables here
    const int SIZE = 18;                                                        //constant integer number
    int numbers[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
                       8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 
                       1005231, 6545231, 3852085, 7576651, 7881200, 4581002};   //Charge account validation numbers
    int charge = -1;                                                            //User input position to search the array 
    int index = -1;                                                             //Subscript to search array
    bool found = false;                                                         //Set a flag
    
    //Obtains the input from user
    cout << "Enter a charge account number.\n";
    cin >> charge;
    
    //Display: If the value is found
    for (index = 0; index < SIZE; index++)
    {
        if (charge == numbers[index])
        {
            found = true;
            cout << "The number is VALID. "<< endl;
            break;
        }
    }
    //Display: If the value is not found
    if (!found)                             
    {
        cout << "The number entered is INVALID.\n" << endl;
    }
    
    
    //Exit
    return 0;
}
