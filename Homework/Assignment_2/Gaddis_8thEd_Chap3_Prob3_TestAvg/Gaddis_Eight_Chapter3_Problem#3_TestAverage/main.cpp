/*
 *Write a program that asks for five test scores. The program should calculate 
 * the average test score display it. The number displayed should be formatted
 * in fixed-point notation, with one decimal point of precision.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 4:35 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
    double test1, test2, test3, test4, test5;   //Holds the scores 
    double average;
    
    //Obtains the five test scores
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;
    cout << "Enter the fourth test score: ";
    cin >> test4;
    cout << "Enter the fifth test score: ";
    cin >> test5;
    
    //Calculates the average of the scores
    average= ( test1 + test2 + test3 + test4 + test5)/ 5.0;
    
    //Displays the average of the scores
    cout << setprecision(1) << fixed << endl;
    cout << "The average score is: " << average << endl;
    
    return 0;
}
