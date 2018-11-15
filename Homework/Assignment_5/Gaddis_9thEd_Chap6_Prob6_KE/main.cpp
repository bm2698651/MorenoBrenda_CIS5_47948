/*Kinetic Energy
 * In physics, an object that is in motion is said to have kinetic energy. 
 * The following formula can be used to determine a moving object's kinetic energy. 
 *      KE = 1/2 mv^2
 * The variables in the formula are as follows: KE is the kinetic energy, m is 
 * the object's mass in kilograms, and v is the object's velocity, in meters per 
 * second.
 * Write a function named Kinetic Energy that accepts an object's mass(in kilograms) 
 * and velocity ( in meters per second) as arguments. The function should return 
 * the amount of kinetic energy that the object has. Demonstrate the function by 
 * calling it in a program that asks the user to enter values for mass and velocity. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on November 11, 2018, 9:04 PM
 * Purpose: Kinetic Energy
 */

#include <iostream>                                 //I/O Library          
#include <iomanip>                                 //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototype
float kineticEnergy(int m, int v);

//Program Execution Begins Here 
int main()
{
    //declares all variables
    float ke= 0;
    int m;
    int v;
    
    //obtains input from user
    cout << "What is the mass of the object?(kg)" << endl;
    cin >> m;
    cout << "What is the velocity of the object?(mps)" << endl;
    cin >> v;
    
    //Function
    ke= kineticEnergy(m,v);
    
    //Displays the total
    cout << "The Kinetic Energy of the object is " << ke << endl;
    
    //Exit
    return 0;
}

//function 1
float kineticEnergy(int m, int v)
{
    float ke= 0;
    ke=(0.5 * m) * (v * v);
    
    //exit
    return ke;
}