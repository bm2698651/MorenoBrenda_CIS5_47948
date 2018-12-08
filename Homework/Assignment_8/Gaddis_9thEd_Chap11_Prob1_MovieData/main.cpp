/*Movie Data
 * Write a program that uses a structure named MovieData to store the following 
 * information about a movie:
 *      Title
 *      Director
 *      Year Released
 *      Running Time(in minutes)
 * The program should create two MovieData variables, store values in their 
 * members, and pass each one, in turn, to a function that displays the 
 * information about the movie in a clearly formatted manner. 
 */

/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on December 6, 2018, 2:34 PM
 * Purpose: Movie Data
 */

#include <iostream>                                                             //I/O Library
#include <string>                                                               //String Library

using namespace std;
//User Libraries Here
#include "MovieData.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Structure for Movie Data


//Function Prototypes
void getData1(MovieData&);
void getData2(MovieData&);
void showData1(MovieData);
void showData2(MovieData);

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //All variables declared here
    MovieData a;                                                                //Structure variable for the first movie
    MovieData b;                                                                //Structure variable for the second movie
    
    //Obtains input form user
    getData1(a);                                                                //Structure input for the first movie
    getData2(b);                                                                //Structure input for the first movie
    
    //Displays user input
    showData1(a);                                                               //Prints First Movie
    showData2(b);                                                               //Prints Second Movie
    
    //Exits
    return 0;
}

//*****************************************************************************
// Definition of function getData1. This function uses a structure reference  *
// variable as the movie's first input. It obtains user input and stores the  *
// information gathered into the structure.                                   *
//*****************************************************************************
void getData1(MovieData &a)
{
    //Get the name of the first movie
    cout << "Enter the title of the first movie: ";
    cin >> a.title;
    cout << endl;
    cout << "Enter the name of the director: ";
    cin >> a.director;
    cout << endl;
    cout << "Enter the year the movie was released: ";
    cin >> a.year;
    cout << endl;
    cout << "Enter the running time(in minutes) of the movie: ";
    cin >> a.time;
    cout << endl;
}
//*****************************************************************************
// Definition of function getData2. This function uses a structure reference  *
// variable as the movie's second input. It obtains user input and stores the *
// information gathered into the structure.                                   *
//*****************************************************************************
void getData2(MovieData &b)
{
    //Get the name of the first movie
    cout << "Enter the title of the second movie: ";
    cin >> b.title;
    cout << endl;
    cout << "Enter the name of the director: ";
    cin >> b.director;
    cout << endl;
    cout << "Enter the year the movie was released: ";
    cin >> b.year;
    cout << endl;
    cout << "Enter the running time(in minutes) of the movie: ";
    cin >> b.time;
    cout << endl;
}
//*****************************************************************************
// Definition of function getData1. This function accepts an argument of the  *
// MovieData structure type. The contents of the structure is displayed.      *
//*****************************************************************************
void showData1(MovieData a)
{
    cout << "Movie 1 " << endl;
    cout << "Title: " << a.title << endl;
    cout << "Director: " << a.director << endl;
    cout << "Year Released: " << a.year << endl;
    cout << "Running Time(min): " << a.time << endl;
}
//*****************************************************************************
// Definition of function getData1. This function accepts an argument of the  *
// MovieData structure type. The contents of the structure is displayed.      *
//*****************************************************************************
void showData2(MovieData b)
{
    cout << "Movie 2 " << endl;
    cout << "Title: " << b.title << endl;
    cout << "Director: " << b.director << endl;
    cout << "Year Released: " << b.year << endl;
    cout << "Running Time(min): " << b.time << endl;
}