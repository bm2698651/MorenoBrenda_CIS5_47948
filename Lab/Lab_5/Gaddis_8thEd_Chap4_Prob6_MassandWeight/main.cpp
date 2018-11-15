/*Mass and Weight
 *Scientists measure an object’s mass in kilograms and its weight in newtons. 
 *If you know the amount of mass that an object has, you can calculate its 
 *weight, in newtons, with the following formula:
 * 
 *Weight = mass * 9.8
 *
 *Write a program that asks the user to enter an object’s mass, and then 
 *calculates and displays its weight. If the object weighs more than 1000 
 *newtons, display a message indicating that it is too heavy. If the object 
 *weighs less than 10 newtons, display a message indicating that the object is 
 *too light.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on September 30, 2018, 4:13 PM
 * Purpose: Mass and Weight
 */

#include <iostream>                             //I/O Library
#include <iomanip>                              //I/O Library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main()
{
    //Declares all Variables
    float weight, mass;                        //Variables
    
    //Obtains input from user
    cout << "Enter the object's mass (in kg)." << endl;
    cin >> mass;
    
    //Calculates the weight of the object
    weight = mass * 9.8;
    
    //Displays and determines the weight of the object
    cout << setprecision(1) << fixed;
    if(weight >= 10 && weight <= 1000)
        cout << "The object's weight is " << weight << " newtons." << endl;
    else if(weight > 1000)
        cout << "The object's weight is " << weight << " newtons. The object is too heavy!" << endl;
    else if( weight < 10)
        cout << "The object's weight is " << weight << " newtons. The object is too light!" << endl;
    
    
    //Exit
    return 0;
}