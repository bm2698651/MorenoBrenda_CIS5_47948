/*Math Tutor
 *Write a program that can be used as a math tutor for a young student. 
 * The program should display two random number that are to be added, such as:
 *   247
 * + 129
 * -------
 * The program should wait for the student to enter the answer. If the answer is 
 * correct, a message of congratulations should be printed. If the answer is 
 * incorrect, a message should be printed showing the correct answer.
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 *
 * Created on October 1, 2018, 8:58 PM
 */

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
int main()
{
    int number1, number2, sum, answer;                  //variables
    unsigned seed = time(0);
    
    srand(seed);
    
    //random number generator from 1-999
    number1 = rand() % 999;
    number2 = rand() % 999;
    
    //calculates the correct 
    sum = number1 + number2;
    
    //Displays the question and asks user to input an answer
    cout <<         setw(6) << number1 << endl;
    cout << "+ " << setw(4) << number2 << endl;
    cout << setw(6) << "--------" << endl;
    cout << "What is the correct answer?" << endl;
    cin >> answer;
    
    //Displays- congratulates the user or presents the correct answer 
    if(answer == sum)
        cout << "Congratulations! The answer is correct." << endl;
    else 
        cout << "The answer is incorrect. The sum is " << sum << endl;
    
    return 0;
}