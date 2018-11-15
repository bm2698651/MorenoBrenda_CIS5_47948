/*How Many Widgets?
 * The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each. 
 * Write a program that calculates how many widgets are stacked on a pallet, 
 * based on the total weight of the pallet. The program should ask the user how 
 * much the pallet weighs by itself and with the widgets stacked on it. It 
 * should then calculate and display the number of widgets stacked on the pallet.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 10:50 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const double WIDGET = 12.5;
    double plt_weight, plt_with_widget, widget_weight, number_widget;
    
    //Obtains
    cout << "How much does the pallet weight by itself? ";
    cin >> plt_weight;
    cout << "How much does the pallet weight with the widgets? ";
    cin >> plt_with_widget;
    
    //Calculates
    widget_weight = plt_with_widget - plt_weight;
    number_widget = widget_weight / WIDGET;
    
    //Displays
    cout << setprecision(2) << fixed;
    cout << "Individual widget weight: " << setw(8) << WIDGET << endl;
    cout << "Pallet weight:            " << setw(8) << plt_weight << endl;
    cout << "Pallet weight with widget:" << setw(8) << plt_with_widget << endl;
    cout << "Widget weight:            " << setw(8) << widget_weight << endl;
    cout << "Number of widgets:        " << setw(8) << number_widget << endl;
    
    return 0;
}

