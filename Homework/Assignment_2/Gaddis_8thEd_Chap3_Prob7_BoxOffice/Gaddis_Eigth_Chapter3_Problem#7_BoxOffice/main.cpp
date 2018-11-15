/*Box Office
 * A movie theater only keeps a percentage of the revenue earned from ticket 
 * sales. The remainder goes to the movie distributor. Write a program that 
 * calculates a theater’s gross and net box office profit for a night. 
 * The program should ask for the name of the movie, and how many adult and 
 * child tickets were sold. (The price of an adult ticket is $10.00 and a 
 * child’s ticket is $6.00.) It should display a report similar to
 * Movie Name:                                            “Wheels of Fury” 
 * Adult Tickets Sold:                                             382 
 * Child Tickets Sold:                                             127
 * Gross Box Office Profit:                                    $ 4582.00
 * Net Box Office Profit:                                      $ 916.40
 * Amount Paid to Distributor:                                 $ 3665.60
 * 
 * NOTE: Assume the theater keeps 20% of the gross box office profit.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 9:39 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    string movie_name;
    
    const double ADULT = 10, CHILD = 6, PROFIT = 0.20;
    int TIX_adult, TIX_child; 
    double total, per_TIX;
    
    cout << "What is the name of the movie?: ";
    cin >> movie_name;
    cout << "How many adult tickets were sold?: ";
    cin >> TIX_adult;
    cout << "How many children tickets were sold?: ";
    cin >> TIX_child;
    
    total = ( TIX_adult * ADULT ) + ( TIX_child * CHILD );
    per_TIX = total * PROFIT;
     
    
    cout << setprecision(2) << fixed;
    cout << "Movie Name: " << movie_name << endl;
    cout << "Adult Tickets Sold: " << setw(9) <<  TIX_adult << endl;
    cout << "Child Tickets Sold: " << setw(9) << TIX_child << endl;
    cout << "Gross Box Office Profit: " << setw(8) << total << endl;
    cout << "Net Box Office Profit: " << setw(9) << per_TIX << endl;
    
    return 0;
}

