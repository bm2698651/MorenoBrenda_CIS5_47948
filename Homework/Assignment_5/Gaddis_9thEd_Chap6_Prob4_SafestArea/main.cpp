/*Safest Driving Area
 * Write a program that determines which of five geographic regions within a 
 * major city (north, south, east, west, and central) had the fewest reported 
 * automobile accidents last year. It should have the following two functions, 
 * which are called by main:
 *      int getNumAccidents() is passed the name of a region. It asks the user 
 * for the number of automobile accidents reported in that region during the 
 * last year, validates the input, then returns it. It should be called once for 
 * each city region.
 *      void findLowest() is passed the five accident totals. It determines 
 * which is the smallest and prints the name of the region, along with its 
 * accident figure. 
 * 
 * Input Validation: Do not accept an accident number that is less than 0.
 */


/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 11, 2018, 8:47 PM
 * Purpose: Safest Driving Area
 */


#include <iostream>                                 //I/O Library          
#include <iomanip>                                 //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
float getNumAccidents(string);
void findLowest(int, int, int, int, int);

//Program Execution Begins Here 
int main()
{
    //All variables are declared here
    int nMVA, sMVA, eMVA, wMVA, cMVA;

    
    for(int i=0; i<5; i++)
    {
        switch(i)
        {
            case 0: nMVA=getNumAccidents("North");
            break;
            case 1: sMVA=getNumAccidents("South");
            break;
            case 2: eMVA=getNumAccidents("East");
            break;
            case 3: wMVA=getNumAccidents("West");
            break;
            case 4: cMVA=getNumAccidents("Central");
        }
    }
    
    //Display
    findLowest(nMVA, sMVA, eMVA, wMVA, cMVA);
    
    
    //Exit
    return 0;
    
}

//Function 1
float getNumAccidents(string region)
{
    double number;
    
    cout << "Enter the number of accidents for the following region: " << region << endl;
    cin >> number;
    
    while(number < 0)
    {
        cout << "ERROR! Negative values are not accepted." << endl;
        cout << "Enter the number of accidents for the following region: " << region << endl;
        cin >> number;
    }
    //exit
    return number;
}

//Function 2
void findLowest(int nMVA, int sMVA, int eMVA, int wMVA, int cMVA)
{
    
    int lowest=0;
    string division = "";
    
    if ((nMVA < sMVA) && (nMVA < eMVA) && (nMVA < wMVA)&& (nMVA < cMVA)){
        lowest = nMVA;
        division = "North";
    }
    else if ((sMVA < nMVA) && (sMVA < eMVA) && (sMVA < wMVA)&& (sMVA < cMVA)){
        lowest = sMVA;
        division = "South";
    }
    else if ((eMVA < nMVA) && (eMVA < sMVA) && (eMVA < wMVA)&& (eMVA < cMVA)){
        lowest = eMVA;
        division = "East";
    }
    else if ((wMVA < nMVA) && (wMVA < sMVA) && (wMVA < eMVA)&& (wMVA < cMVA)){
        lowest = wMVA;
        division = "West";
    }
    else
    {
        lowest = cMVA;
        division = "Central";
    }
    
    //Display
    cout << division << " had the lowest accidents within the city." << endl;
    cout << "Accidents: " << lowest;
}
