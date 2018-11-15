/*Magic Dates
 * The date June 10, 1960 is special because when we write it in the following 
 * format, the month times the day equals the year.
 * 6/10/60
 * Write the program that asks the user to enter a month (in numeric form), a 
 * day, and a two-digit year. The program should them determine whether the 
 * month times the day is equal to the year. If so, it should display a message 
 * saying the date is magic. Otherwise it should display a message saying the 
 * date is not magic.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 29, 2018, 8:34 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int day, month, year;           //Holds the date 
    
    //Obtains the input date
    cout << "Enter a month (in numeric form.) " << endl;
    cin >> month;
    cout << "Enter a day (1-31) " << endl;
    cin >> day;
    cout << "Enter a two-digit year " << endl;
    cin >> year;
    
    //Displays and calculates the input 
    if (month * day == year)
        cout << "The date is Magic!" << endl;
    else
        cout << "The date is not Magic." << endl;
    
    return 0;
}
