/*Ingredient Adjuster
 *A cookie recipe calls for the following ingredients:
 * 1.5 cups of sugar
 * 1 cup of butter
 * 2.75 cups of flour
 * The recipe produces 48 cookies with this amount of the ingredients. 
 * Write a program that asks the user how many cookies he or she wants to make, 
 * and then displays the number of cups of each ingredient needed for the 
 * specified number of cookies.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 9:15 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const double COOKIES = 48, SUGAR= 1.5, BUTTER = 1, FLOUR = 2.75;        //Holds the constant amount of the ingredient 
    double number_COOKIES;                                                  //Holds the number of wanted cookies
    double total_SUGAR, total_BUTTER, total_FLOUR;                          //Hold the total amount ingredients needed to make the cookies
    
    //Obtains the number of wanted cookies
    cout << "How many cookies do you want to make? ";
    cin >> number_COOKIES;
    
    //Calculates the needed ingredients
    total_SUGAR = ( SUGAR * number_COOKIES ) / COOKIES;
    total_BUTTER = ( BUTTER * number_COOKIES ) / COOKIES;
    total_FLOUR = ( FLOUR * number_COOKIES ) / COOKIES;
    
    //Displays the total amount of ingredients
    cout <<setprecision(2) << fixed;
    cout << "In order to make " << number_COOKIES << " cookies. You will need:" << endl;
    cout << "Sugar: " << total_SUGAR << " cups" << endl;
    cout << "Butter: " << total_BUTTER << " cups" << endl;
    cout << "Flour: " << total_FLOUR << " cups" << endl;
    
    return 0;
}