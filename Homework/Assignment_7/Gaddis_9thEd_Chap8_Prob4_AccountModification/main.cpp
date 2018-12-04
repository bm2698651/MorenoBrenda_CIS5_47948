/*Charge Account Validation Modification
 * Modify the program you wrote for Problem 1 9Charge Account Validation) so it
 * performs a binary search to locate valid account numbers. Use the selection 
 * sort algorithm to sort the array before the binary search is performed.
 * 

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 30, 2018, 8:31 PM
 * Purpose: Charge Account Validation
 */

#include <iostream>                                                             //I/O Library
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
void selectionSearch (int [], int);
void swap (int &, int &);
int binarySearch(const int [], int, int);

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Declare all variables here
    const int SIZE = 18;                                                        //constant integer number
    int numbers[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
                       8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 
                       1005231, 6545231, 3852085, 7576651, 7881200, 4581002};   //Charge account validation numbers
   
    int charge;                                                                 //User input position to search the array 
    int results;
    
    //Obtains the input from user
    cout << "Enter a charge account number.\n";
    cin >> charge;
    
    //Sort array
    void selectionSort(int numbers, int SIZE);
    
    //Binary Search function
    results = binarySearch(numbers, SIZE, charge);
    
    //Displays if the ticket number entered is a winner 
    if (results == -1)
    {
        cout << "The number is VALID. "<< endl;
    }
    else
    {
        cout << "The number is INVALID. "<< endl;
    }
    
    //Exit
    return 0;
}
//FUNCTIONS
void selectionSearch (int array[], int size)
{
    int minIndex;
    int minValue;
    
    for(int start = 0; start < (size -1); start++)
    {
        minIndex = start;
        minValue = array[start];
        
        for(int index = start + 1; index <size; index++)
        {
            minIndex = start;
            minValue = array[start];
            if(array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
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