/*Lottery Winners Modification
 * Modify the program you wrote for Programming Challenge 2 (Lottery Winners) 
 * so it perform a binary search instead of a linear search. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 30, 2018, 8:42 PM
 * Purpose: Lottery Winners Modification
 */

#include <iostream>                                                             //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
int binarySearch(const int [], int, int);

//Program Execution Begins Here 
int main(int argc, char** argv) {
    const int SIZE = 10;                                                        //constant integer number
    int win_ticket[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 
                           79422, 85647, 93121};
    int buyer;                                                             //Input from user
    int results;
    
    //Obtains the input from user
    cout << "Enter your 5-digit lottery numbers.\n";
    cin >> buyer;
    
    //Binary Search function
    results = binarySearch(win_ticket, SIZE, buyer);
    
    //Displays if the ticket number entered is a winner 
    if (results == -1)
    {
        cout << "Not a winning ticket. Thank you for playing.\n" << endl;
    }
    else
    {
        cout << "CONGRATULATIONS! You are a winner!"<< endl;
    }
    
    //Exit
    return 0;
}

//The binary search function placed here to search the inserted number
int binarySearch(const int arr[], int SIZE, int value)
{
    int first = 0,                                                              //First array element
        last = SIZE -1,                                                         //Last array element
        middle,                                                                 //Midpoint array element
        position = -1;                                                          //Position array element
    bool found = false;                                                         //Flag
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        
        if(arr[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if(arr[middle] > value)
        {
            last = middle -1;
        }
        else
        {
            first = middle + 1;
        }
    }
    //Exit
    return position;
}
