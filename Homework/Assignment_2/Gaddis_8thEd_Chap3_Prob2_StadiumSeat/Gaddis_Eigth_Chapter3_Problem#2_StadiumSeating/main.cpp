/*
 *There are three seating categories at a stadium. For a softball game, Class A 
 * seats cosy $15, Class B seats cost $12, and Class C seats cost $9. Write a 
 * a program that asks how many tickets for each class of seats were sold, then 
 * displays the amount of income generated from tickets sales. 
 * Format your dollar amount in fixed-point notation, with two decimal places 
 * of precision, and be sure the decimal point is always displayed.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 3:01 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    
    double ClassA=15, ClassB=12, ClassC=9;  //Holds the cost per tickets 
    double numberA, numberB, numberC;       //Holds the number of tickets sold
    double total;
    
    //Obtains the number of tickets sold
    cout << "How many tickets were sold for Class A?";
    cin >> numberA;
    cout << "How many tickets were sold for Class B?";
    cin >> numberB;
    cout << "How many tickets were sold for Class C?";
    cin >> numberC;
    
    //Calculates the number of tickets sold
    cout << setprecision(2)<< fixed;
    cout << "Sales from Class A: $ " << numberA * ClassA << endl;
    cout << "Sales from Class B: $ " << numberB * ClassB << endl;
    cout << "Sales from Class C: $ " << numberC * ClassC << endl;
    
    total = (numberA*ClassA) + (numberB*ClassB) + (numberC*ClassC);
   
    //Displays the number of tickers sold
    cout << "Total amount of sales: $ " << total << endl;
    
    return 0;
}
