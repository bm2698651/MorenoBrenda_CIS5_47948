/*Rainfall Statistics
 * Write a program that lets the user enter the total rainfall for each of 12 
 * months into an array of doubles. The program should calculate and display the 
 * total rainfall for the year, the average monthly rainfall, and the months 
 * with the highest and lowest amounts.
 * 
 * Input Validation: Do not accept negative numbers for monthly rainfall figures.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 22, 2018, 4:25 PM
 * Purpose: Rainfall Statistics
 */

#include <iostream>                                                             //I/O Library
#include <iomanip>                                                              //I/O Library

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //All variables declared here
    const int ARR_SIZE = 12;
    double months[ARR_SIZE];
    double rain = 0;
    double total = 0;
    double average = 0;
    double highest = 0;
    double lowest = 0;
    
    
    cout << "Enter the total amount of rainfall for each month. \n ";
    
    //Obtains input from user for each month
    for (int index = 0; index < 12; index++)
    {
        cout <<"Month " << index + 1 << ": ";
        cin >> months[index];
        
        //Input Validation
        while (months[index] < 0)
        {
            cout << "ERROR! Negative values are not accepted. Enter a positive value. \n" << endl;
            cin >> months[index]; 
        }
        
        //Calculates the total of rainfall
        total += months[index];
    }
    
    //Calculates the monthly average of rainfall
    average = total/12;
    
    //Highest and lowest are started at 0
    highest = months[0];
    lowest = months[0];
    
    //Calculates which month had the highest and lowest amount of rainfall
    for (int index = 1; index <= 12; index++)
    {
        rain = months[index];
        
        if (highest < rain)
        {
            highest = rain;
        }
        if (lowest > rain)
        {
            lowest = rain;
        }
        
    }
    
    //Displays the total amount of rainfall 
    cout << setprecision(2) << showpoint << fixed;
    cout << "Total rainfall for the year: " << total << endl;
    cout << "Average monthly rainfall: " << average << endl;
    cout << "Month with the Highest rainfall: " << highest << endl;
    cout << "Month with the Lowest rainfall: " << lowest << endl;
    
    //EXIT
    return 0;
}
