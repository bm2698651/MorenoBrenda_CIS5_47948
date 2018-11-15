/*Markup
 * Write a program that asks the user to enter an item's wholesale cost and its 
 * markup percentage. It should then display the item's retail price. 
 * For example:
 *      If an item's wholesale cost is 5.00 and its markup percentage is 100 
 *      percent, then the item's retail price is 10.00.
 *      If an item's wholesale cost is 5.00 and its markup percentage is 50 
 *      percent, then the item's retail price is 7.50.
 * The program should have a function named calculateRetail that receives the 
 * wholesale cost and the markup percentage as arguments and returns the retail 
 * price of the item.
 * 
 * Input Validation: Do not accept negative values for either the wholesale cost 
 * the the item or the markup percentage.
 */


/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 8, 2018, 4:22 PM
 * Purpose: Markup
 */

#include <iostream>                                 //I/O Library          
#include <iomanip>                                 //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
float calculateRetail(float, float);

//Program Execution Begins Here 
int main()
{
    //All variables are declared here
    float wholesale, markup;
    float price;
    
    //Obtains input from user
    cout << "Enter the wholesale cost and the markup percentage of the item." << endl;
    cin >> wholesale>>markup;
    
    //Calculates input. Input must not be a negative number
    while(wholesale < 0 || markup < 0)
    {
        cout << "ERROR! Negative values are not accepted."<<endl;
        cout << "Enter the wholesale cost and the markup percentage of the item."<< endl;
        cin >> wholesale>>markup;
    }
    
    //Displays and calculates retail price
    cout << setprecision(2) << fixed;
    price = calculateRetail(wholesale, markup);
    cout << "Retail Price: " << price << endl;
    
    //Exit
    return 0;
    
}

//Function 1
float calculateRetail(float cost, float percent)
{
    //All variables are declared here
    float totalcost;
    
    //calculates total cost of the item
    totalcost = ((cost/100)* percent + cost);
    
    //exit
    return totalcost;
}

