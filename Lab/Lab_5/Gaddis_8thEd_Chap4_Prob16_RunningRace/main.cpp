/*Running the Race
 *Write a program that asks for the names of three runners and the time it took 
 *each of them to finish the race.  The program should display who came in 
 *first, second, and third place. 
 *Input validation: only accept positive numbers for the times.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 1, 2018, 9:33 PM
 * Purpose: Running the Race
 */

#include <iostream>                                     //I/O Library
#include <iomanip>                                      //I/O Library 
#include <string>                                       //String Function

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main()
{
    //Declares all Variables Here
    string runner1, runner2, runner3;                   //Holds runner's names
    float time1, time2, time3;                          //Holds runner's time
    
    
    //Obtains input from user. Name then time
    cout << "Enter the name of the 1st runner." << endl;
    cin >> runner1;
    cout << "Enter the time the 1st runner finished." << endl;
    cin >> time1;
    cout << "Enter the name of the 2nd runner." << endl;
    cin >> runner2;
    cout << "Enter the time the 2nd runner finished." << endl;
    cin >> time2;
    cout << "Enter the name of the 3rd runner." << endl;
    cin >> runner3;
    cout << "Enter the time the 3rd runner finished." << endl;
    cin >> time3;
    
    
    //Displays and determines the place for each runner based on time
    if(time1 <= 0 || time2 <= 0 || time3 <= 0)
        cout << "Program only accepts positive numbers for the time." << endl;
    else if(time1 < time2 && time1 < time3)
        if(time2 < time3)
        {
            cout << "1st Place: " << runner1 << endl;
            cout << "2nd Place: " << runner2 << endl;
            cout << "3rd Place: " << runner3 << endl;
        }
        else if(time3 < time2)
        {
            cout << "1st Place: " << runner1 << endl;
            cout << "2nd Place: " << runner3 << endl;
            cout << "3rd Place: " << runner2 << endl;
        }
    if(time2 < time1 && time2 < time3)
        if(time1 < time3)
        {
            cout << "1st Place: " << runner2 << endl;
            cout << "2nd Place: " << runner1 << endl;
            cout << "3rd Place: " << runner3 << endl;
        }
        else if(time3 < time1)
        {
            cout << "1st Place: " << runner2 << endl;
            cout << "2nd Place: " << runner3 << endl;
            cout << "3rd Place: " << runner1 << endl;
        }
    if(time3 < time1 && time3 < time2)
        if(time1 < time2)
        {
            cout << "1st Place: " << runner3 << endl;
            cout << "2nd Place: " << runner1 << endl;
            cout << "3rd Place: " << runner2 << endl;
        }
        else if(time2 < time1)
        {
            cout << "1st Place: " << runner3 << endl;
            cout << "2nd Place: " << runner2 << endl;
            cout << "3rd Place: " << runner1 << endl;
        }
    
    //Exit
    return 0;
}

