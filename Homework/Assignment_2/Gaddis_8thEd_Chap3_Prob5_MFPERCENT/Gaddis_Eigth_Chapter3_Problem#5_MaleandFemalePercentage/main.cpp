/*Male and Female Percentages
 * Write a program that asks the user for the number of males and the number of
 * females registered in a class. The program should display the percentage of 
 * males and females in the class.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 8:39 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    
    int males, females;             //Holds the number of males and females
    double total;                   //Holds the total of males and females
    double per_m, per_f;            //Holds the percentage of males and females
    const int PERCENT = 100;        //Holds the varaible of 100
    
    //Obtains the number of students
    cout << "How many males are registered in the class:";
    cin >> males;
    cout << "How many females are registered in the class:";
    cin >> females;
    
    //Calculates the total amount of students
    total = males + females;
    
    //Calculates the total amount of students in percentage
    per_m = (males / total) * PERCENT;
    per_f = (females / total) * PERCENT;
    
    //Displays the total amount of students 
    cout << setprecision(1) << fixed;
    cout << "There are a total of " << total << " students registered in the class." << endl;
    cout << "The percentage of males is " << per_m << endl;
    cout << "The percentage of females is " << per_f << endl;
    
    return 0;
}
