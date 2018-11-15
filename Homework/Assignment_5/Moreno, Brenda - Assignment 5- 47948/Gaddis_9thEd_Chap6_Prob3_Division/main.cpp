/*Winning Division
 * Write a program that determines which of a company's four divisions 
 * (Northeast, Southeast, Northwest, and Southwest) had the greatest sales for 
 * a quarter. It should include the following two functions, which are called 
 * by main:
 *      double getSales() is passed the name of a division, It asks the user for 
 * a division's quarterly sales figure, validates the input, then returns it. It 
 * should be called once for each division.
 *      void findHighest() is passed the four sales totals. It determines which 
 * of the largest and prints the name of the high-grossing division, along with 
 * its sales figure.
 * 
 * Input Validation: Do not accept dollar amount less than $0.00.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 11, 2018, 8:31 PM
 * Purpose: Winning Division
 */

#include <iostream>                                 //I/O Library          
#include <iomanip>                                 //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
double getSales(string);
void findHighest(double, double, double, double);

//Program Execution Begins Here 
int main()
{
    //All variables are declared here
    double NEsales, SEsales, NWsales, SWsales;

    
    for(int i=0; i<4; i++)
    {
        switch(i)
        {
            case 0: NEsales=getSales("Northeast");
            break;
            case 1: SEsales=getSales("Southeast");
            break;
            case 2: NWsales=getSales("Northwest");
            break;
            case 3: SWsales=getSales("Southwest");
            break;
        }
        
        
    }
    findHighest(NEsales,SEsales,NWsales,SWsales);
    
    //Exit
    return 0;
    
}

//Function 1
double getSales(string region)
{
    double sale;
    
    cout << "Enter the sale for the following division: " << region << endl;
    cout << "$";
    cin >> sale;
    
    while(sale < 0)
    {
        cout << "ERROR! Negative values are not accepted." << endl;
        cout << "Enter the sale for the following division: " << region << endl;
        cout << "$";
        cin >> sale;
    }
    //exit
    return sale;
}

//Function 2
void findHighest(double NEsales,double SEsales,double NWsales, double SWsales)
{
    
    double highest;
    string division = "";
    
    if ((NEsales > SEsales) && (NEsales > NWsales) && (NEsales > SWsales)){
        highest = NEsales;
        division = "Northeast";
    }
    else if ((SEsales > NEsales) && (SEsales > NWsales) && (SEsales > SWsales)){
        highest = SEsales;
        division = "Southeast";
    }
    else if ((NWsales > NEsales) && (NWsales > SEsales) && (NWsales > SWsales)){
        highest = NEsales;
        division = "Northeast";
    }
    else
    {
        highest = SWsales;
        division = "Southwest";
    }
    
    //Display
    cout << division << " had the greatest sales for a quarter." << endl;
    cout << "$" << highest<< endl;
}
