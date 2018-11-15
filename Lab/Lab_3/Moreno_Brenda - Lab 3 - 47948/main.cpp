/*Lab Assignment 3
 *Create a program.
 *Calculate the percentage Gas Tax on a gallon of gas, and the profit made from
 *a gallon of gas given.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 24, 2018, 2:24 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double EXC_TAX = 39, CAP_TRADE = 10, FEDEXC_TAX = 18.4;                     //Holds the amount of tax
    const double SALES_TAX = 0.08, PROFIT = 0.065;                              //Holds the percentage of tax
    double cost, total, total_cost, total_profit;                               //Holds the amount of gas cost and profit
    
    
    //Obtains input of cost per gallon of gas
    cout << "The amount it cost you per gallon the last time you put gas in your car: ";
    cin >> cost;
    
    //Calculates the cost of gallon per gas
    total = (cost * EXC_TAX ) * SALES_TAX;
    total_cost = total - cost;
    total_profit = ( total - cost) * PROFIT; 
    
    //Displays the profit of gallon per gas
    cout << setprecision (3) << fixed;
    cout << " Company Profit: "    << setw (9) << total_cost << endl;
    cout << " Government Profit: " << setw (6) << total_profit << endl ;
    
    return 0;
}
