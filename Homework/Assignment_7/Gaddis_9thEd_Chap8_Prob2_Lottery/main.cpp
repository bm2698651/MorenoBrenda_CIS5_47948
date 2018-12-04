/*Lottery Winners
 * A lottery ticket buyer purchases ten tickets a week, always playing the same 
 * ten 5-digit "lucky" combinations. Write a program that initializes an array 
 * or a vector with these numbers, then lets the player enter this week's winning 
 * 5-digit number. The program should perform a linear search through the list 
 * of the player's numbers and report whether or not one of the tickets is a 
 * winner this week. Here are the numbers:
 * 13579    26791   26792   33445   55555
 * 62483    77777   79422   85647   93121
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 30, 2018, 8:38 PM
 * Purpose: Lottery Winners 
 */

#include <iostream>                                                             //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype

//Program Execution Begins Here 
int main(int argc, char** argv) {
    const int SIZE = 10;                                                        //constant integer number
    int win_ticket[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 
                           79422, 85647, 93121};
    int buyer = -1;                                                             //Input from user
    int index = -1;                                                             //Subscript to search array
    bool found = false;                                                         //Set a flag
    
    //Obtains the input from user
    cout << "Enter your 5-digit lottery numbers.\n";
    cin >> buyer;
    
    //Display: If the value is found
    for (index = 0; index < SIZE; index++)
    {
        if (buyer == win_ticket[index])
        {
            found = true;
            cout << "CONGRATULATIONS! You are a winner!"<< endl;
            break;
        }
    }
    //Display: If the value is not found
    if (!found)                             
    {
        cout << "Not a winning ticket. Thank you for playing.\n" << endl;
    }

    //Exit
    return 0;
}

