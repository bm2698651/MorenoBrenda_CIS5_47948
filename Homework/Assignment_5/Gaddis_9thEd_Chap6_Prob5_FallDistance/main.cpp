/*Falling Distance
 * When an object is falling because of gravity, the following can be used to 
 * determine the distance the object falls in a specific time period:
 *      d= 1/2 gt^2
 * The variables in the formula are as follows: d is the distance in meters, 
 * g is 9.8, and t is the amount of time, in seconds, that the object has been 
 * falling.
 * Write a function named fallingDistance that accepts an object's falling 
 * time (in seconds) as an argument. The function should return the distance, 
 * in meters, that the object has fallen during that time interval. Write a 
 * program that demonstrates the function by calling it in a loop that passes 
 * the values 1 through 10 as arguments and displays the return value.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno 
 * Created on November 11, 2018, 8:55 PM
 * Purpose: Falling Distance
 */

#include <iostream>                                 //I/O Library          
#include <iomanip>                                 //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
float fallingDistance(int t=0);

//Program Execution Begins Here 
int main()
{
    //declares all variables
    int t=0;
    float d=0;
    
    for (int i=1; i <=10; i++)
    {
        d=fallingDistance(i);
        cout << d << " meters." << endl;
        cout << i << " time(seconds)." << endl;
    }
    
    
    //Exit
    return 0;
}

//function 1
float fallingDistance(int t)
{
    float d=0;
    const float g= 9.8;
    
    d= (0.5 * g)* (t * t);
    
    //exit
    return d;
}