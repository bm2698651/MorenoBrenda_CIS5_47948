/*Color Mixer
 *The colors red, blue, and yellow are known as the primary colors because that 
 *cannot be made by mixing other colors. When you mix two primary colors, you
 *get a secondary color, as shown here:
 *When you mix red and blue, you get purple.
 *When you mix red and yellow, you get orange.
 *When you mix blue and yellow, you get green.
 *Write a program that prompts the user to enter the names of two primary
 *colors to mix. If the user enters anything other than “red,” “blue,” or
 *“yellow,” the program should display an error message. Otherwise, the program
 *should display the name of the secondary color that results by mixing two
 *primary colors.

 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on September 30, 2018, 8:02 PM
 * Purpose: Color Mixer
 */

#include <iostream>                                                 //I/O Library
#include <iomanip>                                                  //I/O Library
#include <string>                                                   //String Function

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main()
{
    //Declares all Variables Here
    string red = "red", yellow = "yellow", blue = "blue";           //Color names
    string color1= " ", color2= " ";                                //Input color name
    
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
    
    //Exit
    return 0;
}
