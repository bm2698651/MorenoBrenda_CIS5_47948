/*
 * Write a program that calculates a car's gas milage. The program should ask 
 * the user to enter the number of gallons of gas the car can hold and the 
 * number of miles it can be driven on a full tank. It should then display the 
 * number of miles that may be driven per gallon of gas.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 12:55 PM
 */

#include <iostream>
using namespace std;

int main()
{
    double capacity, miles;     // Holds the number of capacity(gas) and miles
    double average;             // Holds the average
    
    // Obtains the numbers of capacity and miles
    cout << "Enter the number of gallons of gas the car can hold:";
    cin >> capacity;
    cout << "Enter the number of miles the car can be driven on a full tank:";
    cin >> miles;
    
    // Calculates the average of the capacity and miles.
    average = miles/capacity;
    
    // Displays the average.
    cout << "The number of miles that may be driven per gallon of gas is " << average << endl;
    
    return 0;
}
