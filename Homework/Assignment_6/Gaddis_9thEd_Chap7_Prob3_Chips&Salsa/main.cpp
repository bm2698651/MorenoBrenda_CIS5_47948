/*Chips and Salsa
 * Write a program that lets a maker of chips and salsa keep track of sales for 
 * five different types of salsa: mild, medium, sweet, hot, and zesty. 
 * The program should use two parallel 5-element arrays: an array of strings 
 * that hold the five salsa names, and an array of integers that holds the 
 * number of jars sold during the past month for each salsa type. The salsa 
 * names should be stored using an initialization list at the time the name 
 * array is created. The program should prompt the user to enter the number of 
 * jars sold for each type. Once this sales data has been entered, the program 
 * should produce a report that displays sales for each salsa type, total sales, 
 * and the names of the highest selling and lowest selling products.
 * 
 * Input Validation: Do not accept negative values for number of jars sold.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 24, 2018, 6:39 PM
 * Purpose: Chips and Salsa
 */

#include <iostream>                                                             //I/O Library
#include <iomanip>                                                              //I/O Library
#include <string>                                                               //String Library

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //All variables declared here
    const int ARR_SIZE = 5;
    string type[ARR_SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};        //Array string. Holds salsa names
    int jars[ARR_SIZE];
    int salsa = 0;
    int total = 0;
    int highest = 0;
    int lowest = 0;
    
    //Obtains input from user
    cout << "Enter the number of jars sold for each type.\n";
    for(int index = 0; index < ARR_SIZE; index++)
    {
        cout << type[index] << ": ";
        cin >> jars[index];
        
        //If the input is a negative number. User is asked to input a new value
        while(jars[index] < 0)
        {
            cout << "Error! Negative numbers are not accepted. Enter a positive number.\n";
            cin >> jars[index];
        }
        //Calculates the total amount of jars produced
        total += jars[index];
    }
    //Highest and lowest are started at 0
    highest = jars[0];
    lowest = jars[0];
    
    //Calculates which salsa type had the highest and lowest sell
    for(int index = 1; index <= ARR_SIZE; index++)
    {
        salsa = jars[index];
        
        if(highest < salsa)
        {
            highest = salsa; 
        }
        if(lowest < salsa);
        {
            lowest = salsa;
        }
    }
    
    
    cout << endl;
    
    //Displays sales report
    cout << "Sales Report:\n";
    cout << type[0]<< ": \t\t" << jars[0] << endl;
    cout << type[1]<< ": \t" << jars[1] << endl;
    cout << type[2]<< ": \t\t" << jars[2] << endl;
    cout << type[3]<< ": \t\t" << jars[3] << endl;
    cout << type[4]<< ": \t\t" << jars[4] << endl;
    cout << endl;
    cout << "Total Sales: \t\t" << total << endl;
    cout << "Highest Selling: \t" << highest << endl;
    cout << "Lowest Selling: \t" << lowest << endl;
    
    //Exit
    return 0;
}

