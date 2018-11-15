/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr                 Brenda Moreno
 * Created on October 4th, 2018, 10:25 AM
 * Purpose:  Menu Template
 */


//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;//Option 0 to 9 input as a character not a numeric value
    double number1, number2;                                                    //Problem 1 Variables
    int number;                                                                 //Problem 2 Variable
    int day, month, year;                                                       //Problem 3 Variables
    double length1, width1, area1, length2, width2, area2;                      //Problem 4 Variables
    double weight, height, BMI;                                                 //Problem 5 Variables 
    double weight2, mass;                                                       //Problem 6 Variables
    string red = "red", yellow = "yellow", blue = "blue";                       //Problem 8 Variables
    string color1= " ", color2= " ";                                            //Problem 8 Variables
    double pennies, nickels, dimes, quarters, total;                            //Problem 9 Variables
    int number_1, number_2, sum, answer;                                        //Problem 11 Variables
    unsigned seed = time(0);                                                    //" "
    string runner1, runner2, runner3;                                           //Problem 16 Variables
    double time1, time2, time3;                                                 //" "
    
    
    //Input or initialize values Here
    cout<<"This program illustrates a Menu"<<endl;
    cout<<"Choose the problem you wish to solve"<<endl;
    cout<<"0 -> Gaddis 8th_Chapter 4_Problem 1"<<endl;
    cout<<"1 -> Gaddis 8th_Chapter 4_Problem 2"<<endl;
    cout<<"2 -> Gaddis 8th_Chapter 4_Problem 3"<<endl;
    cout<<"3 -> Gaddis 8th_Chapter 4_Problem 4"<<endl;
    cout<<"4 -> Gaddis 8th_Chapter 4_Problem 5"<<endl;
    cout<<"5 -> Gaddis 8th_Chapter 4_Problem 6"<<endl;
    cout<<"6 -> Gaddis 8th_Chapter 4_Problem 8"<<endl;
    cout<<"7 _> Gaddis 8th_Chapter 4_Problem 9"<<endl;
    cout<<"8 -> Gaddis 8th_Chapter 4_Problem 11"<<endl;
    cout<<"9 -> Gaddis 8th_Chapter 4_Problem 16"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    switch(choice){
        case '0':
    {
  //Obtains the two input numbers         
    cout << "Enter a number." << endl;
    cin >> number1;
    cout << "Enter another number." << endl;
    cin >> number2;
    
    //Displays and determines which number is greater
    if (number1 > number2)
        cout << number1 << " is greater than " << number2 << endl;
    else
        cout << number2 << " is greater than " << number1 << endl;
            break;
    } 
        case '1': 
    {
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
            break;
        }
    }
    }
        case '2':
    {
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
            break;
    }
        case '3':
    {       
    //Obtains the input from the user
    cout << "Rectangle 1: Enter the length." << endl;
    cin >> length1;
    cout << "Rectangle 1: Enter the width." << endl;
    cin >> width1;
    cout << "Rectangle 2: Enter the length." << endl;
    cin >> length2;
    cout << "Rectangle 2: Enter the width." << endl;
    cin >> width2;
    
    //Calculates the area 
    area1 = length1 * width2;
    area2 = length2 * width2;
    
    //Displays and determines the which area is greater or if both areas are the same
    if (area1 > area2)
        cout << "Rectangle 1 has a greater area." << endl;
    else if (area1 < area2)
        cout << "Rectangle 2 has a greater area." << endl;
    else if (area1 == area2)
        cout << "Both rectangles have the same area." << endl;
    break;
        }
        case '4':
    {       
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
    break;
    }   
        case '5':
    {    
    //Obtains input from user
    cout << "Enter the object's mass (in kg)." << endl;
    cin >> mass;
    
    //Calculates the weight of the object
    weight2 = mass * 9.8;
    
    //Displays and determines the weight of the object
    cout << setprecision(1) << fixed;
    if(weight2 >= 10 && weight2 <= 1000)
        cout << "The object's weight is " << weight2 << " newtons." << endl;
    else if(weight > 1000)
        cout << "The object's weight is " << weight2 << " newtons. The object is too heavy!" << endl;
    else if( weight < 10)
        cout << "The object's weight is " << weight2 << " newtons. The object is too light!" << endl;
    break;
    }
        case '6':
    {     
    //Obtains the color from the user
    cout << "Type the colors in lowercase." << endl;
    cout << "Enter a primary color." << endl;
    cin >> color1;
    cout << "Enter a second primary color." << endl;
    cin >> color2;
   
    //Displays and determines the secondary color. If no primary color is typed, "Error" message appears.
    if(color1== "red" && color2 == "red")
        cout << "Still a primary: RED" << endl;
    else if(color1== "yellow" && color2=="yellow")
        cout << "Still a primary: YELLOW" << endl;
    else if(color1=="blue" && color2=="blue")
        cout << "Still a primary: BLUE" << endl;
    else if((color1== "red" && color2== "yellow")||(color1== "yellow" && color2== "red"))
        cout << "Secondary color: ORANGE" << endl;
    else if((color1== "yellow" && color2== "blue")||(color1== "blue" && color2== "yellow"))
        cout << "Seconday color: GREEN" << endl;
    else if((color1== "blue" && color2== "red")||(color1== "red" && color2== "blue"))
        cout << "Seconday color: Violet" << endl;
    else if((color1!= "red" || "yellow" || "blue")||(color2 != "red" || "yellow" || "blue"))
        cout << "Error" << endl;
    break;
    }    
        case '7':
    {      
    //Obtains the input from the user
    cout << "Enter the number of pennies." << endl;
    cin >> pennies;
    cout << "Enter the number of nickels." << endl;
    cin >> nickels;
    cout << "Enter the number of dimes." << endl;
    cin >> dimes;
    cout << "Enter the number of quarters." << endl;
    cin >> quarters;
    
    //Calculates the total amount
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
    
    //Displays and determines the total amount
    cout << setprecision(2) << fixed;
    if(total == 1.00)
        cout << "Congratulation! The total amount was $1." << endl;
    else if(total > 1.00)
        cout << "The total amount does not equal $1. Try again." << endl;
    else if (total < 1.00)
        cout << "The total amount does not equal $1. Try again." << endl;
    break;
    }
        case '8':
    {      
     srand(seed);
    //random number generator from 1-999
    number_1 = rand() % 999;
    number_2 = rand() % 999;
    
    //calculates the correct 
    sum = number_1 + number_2;
    
    //Displays the question and asks user to input an answer
    cout <<         setw(6) << number_1 << endl;
    cout << "+ " << setw(4) << number_2 << endl;
    cout << setw(6) << "--------" << endl;
    cout << "What is the correct answer?" << endl;
    cin >> answer;
    
    //Displays- congratulates the user or presents the correct answer 
    if(answer == sum)
        cout << "Congratulations! The answer is correct." << endl;
    else 
        cout << "The answer is incorrect. The sum is " << sum << endl;
    break;
    }     
        case '9':
    {       
    //Obtains input from user. Name then time
    cout << "Enter the name of the 1st runner." << endl;
    cin >> runner1;
    cout << "Enter the time the 1st runner finished." << endl;
    cin >> time1;
    cout << "Enter the name of the 2nd runner." << endl;
    cin >> runner2;
    cout << "Enter the time the 2nd runner finished." << endl;
    cin >> time2;
    cout << "Enter the name of the 3rd runner." << endl;
    cin >> runner3;
    cout << "Enter the time the 3rd runner finished." << endl;
    cin >> time3;
    
    
    //Displays and determines the place for each runner based on time
    if(time1 <= 0 || time2 <= 0 || time3 <= 0)
        cout << "Program only accepts positive numbers for the time." << endl;
    else if(time1 < time2 && time1 < time3)
        if(time2 < time3)
        {
            cout << "1st Place: " << runner1 << endl;
            cout << "2nd Place: " << runner2 << endl;
            cout << "3rd Place: " << runner3 << endl;
        }
        else if(time3 < time2)
        {
            cout << "1st Place: " << runner1 << endl;
            cout << "2nd Place: " << runner3 << endl;
            cout << "3rd Place: " << runner2 << endl;
        }
    if(time2 < time1 && time2 < time3)
        if(time1 < time3)
        {
            cout << "1st Place: " << runner2 << endl;
            cout << "2nd Place: " << runner1 << endl;
            cout << "3rd Place: " << runner3 << endl;
        }
        else if(time3 < time1)
        {
            cout << "1st Place: " << runner2 << endl;
            cout << "2nd Place: " << runner3 << endl;
            cout << "3rd Place: " << runner1 << endl;
        }
    if(time3 < time1 && time3 < time2)
        if(time1 < time2)
        {
            cout << "1st Place: " << runner3 << endl;
            cout << "2nd Place: " << runner1 << endl;
            cout << "3rd Place: " << runner2 << endl;
        }
        else if(time2 < time1)
        {
            cout << "1st Place: " << runner3 << endl;
            cout << "2nd Place: " << runner2 << endl;
            cout << "3rd Place: " << runner1 << endl;
        }
    break;
    }  
        default:cout<<"Having trouble following instructions?"<<endl;
    }
        
    
    //Exit Stage Right
    return 0;
}

