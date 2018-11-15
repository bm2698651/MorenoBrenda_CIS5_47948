/*Average Rainfall
 * Write a program that calculates the average rainfall for three months. 
 * The program should ask the user to enter the name of each month, such as 
 * June or July, and the amount of rain (in inches) that fell each month. 
 * The program should display a message similar to the following:
 * The average rainfall for June, July, and August is 6.72 inches.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 6:19 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    string mth1, mth2, mth3;
    double rain1, rain2, rain3;
    double average;
    
    cout << "Enter the name of the month: ";
    cin >> mth1;
    cout << "In inches, how much did it rain?: ";
    cin >> rain1;
    cout << "Enter the name of the month: ";
    cin >> mth2;
    cout << "In inches, how much did it rain?: ";
    cin >> rain2;
    cout << "Enter the name of the month: ";
    cin >> mth3;
    cout << "In inches, how much did it rain?: ";
    cin >> rain3;
    
    average= ( rain1 + rain2 + rain3)/3;
    
    cout << setprecision(2) << fixed << endl;
    cout << "The average rainfall for " << mth1 << ", " << mth2 << ", and " << mth3 << " is " << average << endl;
    
    return 0;
}
