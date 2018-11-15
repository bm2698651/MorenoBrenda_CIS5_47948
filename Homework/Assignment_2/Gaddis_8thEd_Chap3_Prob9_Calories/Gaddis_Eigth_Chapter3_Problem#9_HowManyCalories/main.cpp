/*How Many Calories?
 * A bag of cookies holds 30 cookies. The calorie information on the bag claims 
 * that there are 10 “servings” in the bag and that a serving equals 300 
 * calories. Write a program that asks the user to input how many cookies he or 
 * she actually ate and then reports how many total calories were consumed.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 18, 2018, 11:12 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const int BAG_COOKIES = 30, SERVING = 10, CALORIES = 300;
    double eaten_cookies, eaten_servings, consumed_calories;
 
    double cookies_per_serving = BAG_COOKIES / SERVING;
    
    cout << "How many cookies did you eat? ";
    cin >> eaten_cookies;
    
    
    eaten_servings = eaten_cookies / SERVING;
    consumed_calories = eaten_servings * cookies_per_serving;
    
    cout << setprecision(2) << fixed;
    cout << "Total number of calories consumed: " << consumed_calories << endl;
    
    return 0 ;
}

