/*Areas of Rectangle
 *The area of a rectangle is the rectangle's length times its width. 
 * write a program that asks for the length and width of two rectangles. 
 * The program should tell the user which rectangle has the greater area, or if 
 * the areas are the same.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on September 30, 2018, 12:01 AM
 * Purpose: Areas of Rectangle 
 */

#include <iostream>                                                 //I/O Library 
#include <iomanip>                                                  //I/O Library 

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e,Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main()
{ 
    //Declares all Variables 
    float length1, width1, area1, length2, width2, area2;          //Holds the number of the rectangle
    
    //Obtains the input from the user
    cout << "Rectangle 1: Enter the length." << endl;
    cin >> length1;
    cout << "Rectangle 1: Enter the width." << endl;
    cin >> width1;
    cout << "Rectangle 2: Enter the length." << endl;
    cin >> length2;
    cout << "Rectangle 2: Enter the width." << endl;
    cin >> width2;
    
    //Calculates the area 
    area1 = length1 * width2;
    area2 = length2 * width2;
    
    //Displays and determines the which area is greater or if both areas are the same
    if (area1 > area2)
        cout << "Rectangle 1 has a greater area." << endl;
    else if (area1 < area2)
        cout << "Rectangle 2 has a greater area." << endl;
    else if (area1 == area2)
        cout << "Both rectangles have the same area." << endl;
    
    
    //Exit
    return 0;
}