/*Largest/Smallest Array Values
 * Write a program that lets the user enter ten values into an array. 
 * The program should then display the largest and smallest values stores in the array.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 22, 2018, 12:45 PM
 * Purpose: Largest/Smallest Array Values
 */

#include <iostream>                                 //I/O Library  
#include <iomanip>                                 //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //All variables declared here
    const int SIZE = 10;                            //Ending value
    int numbers[10];                                //Array
    int smallest = 0;                               //Starting value
    int largest = 0;                                //Starting value
    int value = 0;                                  //Starting value
    
    //Obtains values from user
    cout << "Enter 10 values to determine the largest and smallest value." << endl;
    for (int &val : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> val;
    }
    
    //Largest and smallest inputs are started at 0
    largest = numbers[0];
    smallest = numbers[0];
    
    
   //Calculates the largest and smallest value
    for (int index = 1; index <=9; index++)
    {
        value = numbers[index];
        
        if (largest < value)
        {
            largest = value;
        }
        if (smallest > value)
        {
            smallest = value;
        }
        
    }
    cout << endl;
    
    //Displays the values in the array
    cout << "Largest value: " << largest << endl;
    cout << "Smallest value: " << smallest << endl;
    
    //Exit
    return 0;
}
