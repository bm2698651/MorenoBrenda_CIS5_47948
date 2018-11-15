/*Body Mass Index
 * Write a program that calculates and displays a person's body mass index (BMI).
 * The BMI is often used to determine whether a person with a sedentary 
 * lifestyle is overweight or underweight for his or her height. A person's BMI
 * is calculated with the following formula.
 * 
 * BMI= weight x 703/height^2
 * 
 * where weight is measured in pounds and height is measured in inches. 
 * The program should display a message indicating whether the person has 
 * optimal weight, is underweight, or is overweight. A sedentary person's weight 
 * is considered to be optimal if his or her BMI is between 18.5 and 25. If the 
 * BMI is less than 18.5, the person is considered to be underweight. If the BMI
 * value is greater than 25, the person is considered to be overweight.

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 30, 2018, 2:06 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double weight, height, BMI;     //Variables 
    
    //Obtains the input data from the user
    cout << "Enter your weight in pounds: " << endl;
    cin >> weight;
    cout << "Enter your height in inches: " << endl;
    cin >> height;
    
    //Calculates the BMI
    BMI = weight * 703 / (height * height);
    
    //Displays and determines the BMI from the user
    cout << setprecision(2) << fixed;
    if(BMI >= 18.5 && BMI <= 25)
        cout << "You're at optimal weight. You're BMI: " << BMI << endl;
    else if(BMI < 18.5)
        cout << "You're underweight. You're BMI: " << BMI << endl;
    else if(BMI > 25)
        cout << "You're overweight. You're BMI: " << BMI << endl;
    
    return 0;
}
