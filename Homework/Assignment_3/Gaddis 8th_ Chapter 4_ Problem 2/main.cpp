/*Roman Numeral Converter
 * Write a program that asks the user to enter a number within the range of 1 
 * through 10. Use a swtich operation to display the Roman numeral version of 
 * that number.
 * Input Validation: Do not accept a number less than 1 or greater than 10.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on September 29, 2018, 7:13 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    
    int number;         //Variable
    
    //Obtains the number from the user
    cout << "Enter a number from 1-10. " << endl;
    cin >> number;
    
    //Displays and determines the swtich of the inputed 
    if (number < 1 || number > 10)
        cout << "The number must be between 1 and 10." << endl;
    else
    {
        switch (number)
        {
            case 1: cout << "The Roman Numeral is I." << endl;
            break;
            case 2: cout << "The Roman Numeral is II." << endl;
            break;
            case 3: cout << "The Roman Numeral is III." << endl;
            break;
            case 4: cout << "The Roman Numeral is IV." << endl;
            break;
            case 5: cout << "The Roman Numeral is V." << endl;
            break;
            case 6: cout << "The Roman Numeral is VI." << endl;
            break;
            case 7: cout << "The Roman Numeral is VII." << endl;
            break;
            case 8: cout << "The Roman Numeral is VIII." << endl;
            break;
            case 9: cout << "The Roman Numeral is IX." << endl;
            break;
            case 10: cout << "The Roman Numeral is X." << endl;
            break;
            default: cout << "You must enter a number between 1-10." << endl;
        }
    }
    
    return 0;
}
