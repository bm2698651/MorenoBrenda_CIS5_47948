/*Larger than n
 * In a program, write a function that accepts three arguments: an array, the 
 * size of the array, and a number n. Assume the array contains integers. The 
 * function should display all of the numbers in the array that are greater than 
 * the number n.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 24, 2018, 9:23 PM
 * Purpose: Larger than n
 */

#include <iostream>                                                             //I/O Library

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
void printarray (int array[], int SIZE);

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //All variables are declared here
    int SIZE = 5;
    int array[5] = { 44, 65, 86, 32, 21};
   
    //Obtains input from user
    for(int index = 0; index < SIZE; index++)
    {
        cout << array[index] << " ";
        cout << endl;
    }
    
    //Display Function 
    printarray(array, 5);

    //Exit
    return 0;
}

//Function 
void printarray(int array[], int SIZE)
{
   //All variables are declared here
   int n = 45;
   
   //Output
   cout << "Numbers that are greater than n.\n";
   for(int index = 0; index < SIZE; index++) 
   {
       if(array[index] < n)
       {
           cout << array[index] << " ";
           cout << endl;
       }
       
   }
    
    
}

