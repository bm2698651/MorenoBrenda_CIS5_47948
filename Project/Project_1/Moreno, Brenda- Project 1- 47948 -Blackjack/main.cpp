/* 
 * File:   main.cpp
 * Author: Brenda Moreno
 * Created on October 23, 2018, 4:02 PM
 * Purpose: Project 1
 */

#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cmath>
#include <cstdlib>  //Rand/Srand
#include <fstream>
#include <string>   //String
#include <ctime>    //Time
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main()
{
    //Declares all Variables Here
    unsigned seed = time(0);
    srand(seed);
    int selection = 0;
    int deal=0, hit=0, stand=0, surrender=4, split=3;
    float PLcard1,PLcard2,PLcard3,PLcard4,PLcard5,PLcard6;
    float DLcard1,DLcard2,DLcard3;
    float PLsum1,PLsum2,PLsum3,PLsum4,PLsum5;
    float DLsum1,DLsum2;    
    bool stop = false;
    
    //Player's random generated numbers from 1-11 (Cards value from 1-11)
    PLcard1=(rand() % 11+1);
    PLcard2=(rand() % 11+1);
    PLcard3=(rand() % 11+1);
    PLcard4=(rand() % 11+1);
    PLcard5=(rand() % 11+1);
    PLcard6=(rand() % 11+1);
    
    //Dealer's random generated numbers from 1-11 (Cards value from 1-11)
    DLcard1=(rand() % 11+1);
    DLcard2=(rand() % 11+1);
    DLcard3=(rand() % 11+1);
    
    //Player's generated sum value of cards
    PLsum1 = PLcard1 + PLcard2;
    PLsum2 = PLsum1 + PLcard3;
    PLsum3 = PLsum2 + PLcard4;
    PLsum4 = PLsum3 + PLcard5;
    PLsum5 = PLsum4 + PLcard6;
    
    //Dealer's generated sum value of cards
    DLsum1 = DLcard1 + DLcard2;
    DLsum2 = DLsum1 + DLcard3;

    //Title
    //User is to input 1 or 2
    cout << "BLACKJACK" << endl;
    do{
        while(stop != true){
        cout << "Welcome to Blackjack!" << endl;
        cout << "1. DEAL" << endl;
        cout << "2. EXIT " << endl;
        cin >> deal;
        
        //User has selected 1
        //User's cards are presented and total card value
        if(deal != 2){
            cout <<"Your Cards: "<< endl;
            cout << PLcard1 << ", " << PLcard2 << endl;
            cout << "\t\t\t" << "Your Hand: " << PLsum1 << endl;
            
                      
            //Display one card of the dealer
            cout << "Dealer's First Card: " << DLcard1<< endl;
            cout << "\t\t\t" << "Dealer's Hand: " << DLcard1 << endl;  

            //Displays and calculates player's card value 
            if(PLsum1 == 21){
                cout << "YOU WIN!" << endl;
            }
            //User is asked to hit or stand
            else{
            cout << "Would you like to hit or stand? " << endl;
            cout << "1. HIT" << endl;
            cout << "2. STAND " << endl;
            cin >> selection;
            
                //User hit. A new card is given and new card value is displayed
                if(selection !=2){
                cout << "New Card: " << PLcard3 << endl;
                cout << "\t\t\t" << "Your Hand: " << PLsum2 << endl;
                
                //Displays and calculates player's card value 
                if(PLsum2 >= 22){
                    cout << "BUST!" << endl;
                }
                else if(PLsum2 == 21){
                    cout << "YOU WIN!" << endl;
                }
                //User is asked to hit or stand
                    else{
                    cout << "Would you like to hit or stand? " << endl;
                    cout << "1. HIT" << endl;
                    cout << "2. STAND " << endl;
                    cin >> selection;
                    
                    //User hit. A new card is given and new card value is displayed
                    if(selection !=2){
                        cout << "New Card: " << PLcard3 << endl;
                        cout << "\t\t\t" << "Your Hand: " << PLsum3 << endl;
                    
                    //Displays and calculates player's card value     
                    if(PLsum3 >= 22){
                        cout << "BUST!" << endl;
                    }    
                    else if(PLsum3 == 21){
                        cout << "YOU WIN" << endl;
                    }
                    //User is asked to hit or stand    
                    else{
                        cout << "Would you like to hit or stand?" << endl;
                        cout << "1. HIT " << endl;
                        cout << "2. STAND " << endl;
                        cin >> selection;
                        
                        //User hit. A new card is given and new card value is displayed
                        if(selection !=2){
                            cout << "New Card: "<< endl;
                            cout << PLcard4 << endl;
                            cout << "\t\t\t" << "Your Hand: " << PLsum4 << endl;
                            
                            //Displays and calculates player's card value 
                            if(PLsum4 >= 22){
                                cout << "BUST!" << endl;
                            }
                            else if(PLsum4 == 21){
                                cout << "YOU WIN!" << endl;
                            }
                            //User is asked to hit or stand
                            else{
                                cout << "Would you like to hit or stand?" << endl;
                                cout << "1. HIT " << endl;
                                cout << "2. STAND " << endl;
                                cin >> selection;
                                
                                //User hit. A new card is given and new card value is displayed
                                if(selection !=2){
                                    cout << "New Card: " << endl;
                                    cout << PLcard5 << endl;
                                    cout << "\t\t\t" << "Your Hand: " << PLsum5 << endl;
                                    
                                    //Displays and calculates player's card value 
                                    if(PLsum5 >=22){
                                        cout << "BUST!" << endl;
                                    }
                                    else if(PLsum5 ==21){
                                        cout << "YOU WIN!" << endl;
                                    }
                                }
                                //Display dealer's turn
                                else{
                                    cout << "Dealer's Hole Card: " << DLcard2 << endl;
                                    cout << "\t\t\t" << "Dealer's Hand: " << DLsum1 << endl;
                                    
                                    //Displays and calculates dealer's card value 
                                    if(DLsum1 >=22){
                                        cout << "DEALER BUST" << endl;
                                    }
                                    else if(DLsum1 <= 16){
                                        cout << "Dealer's hand is less than 17. Dealer Draws." << endl;
                                        cout << DLcard3 << endl;
                                        cout << "\t\t\t" << "Dealer's Hand: " << DLsum1 << endl;
                                        
                                        //Displays Winner
                                        if(DLsum2 < PLsum1){
                                            cout << "YOU WIN!" << endl;
                                        }
                                        else if(DLsum2 > PLsum1){
                                            cout << "YOU LOSE!" << endl;
                                        }
                                    }
                                }
                                
                            }
                        }
                        //Display dealer's turn
                        else{
                            cout << "Dealer's Hole Card: " << DLcard2 << endl;
                            cout << "\t\t\t" << "Dealer's Hand: " << DLsum1 << endl;
                            
                            //Displays and calculates dealer's card value 
                            if(DLsum1 >=22){
                                cout << "DEALER BUST"<< endl;
                            }
                            else if(DLsum1 <=16){
                                cout << "Dealer's hand is less than 17. Dealer Draws." << endl;
                                cout << DLcard3 << endl;
                                cout << "\t\t\t" << "Dealer's Hand: " << DLsum2 << endl;
                                
                                //Displays Winner
                                if(DLsum2 < PLsum1){
                                    cout << "YOU WIN!" << endl;
                                }
                                else if(DLsum2 > PLsum1){
                                    cout << "YOU LOSE!" << endl;
                                }
                            }
                        }
                    }
                    }
                    //Display dealer's turn
                    else{
                        cout << "Dealer's Hole Card: " << DLcard2 << endl;
                        cout << "\t\t\t" << "Dealer's Hand: " << DLsum1 << endl;
                        
                        //Displays and calculates dealer's card value 
                        if(DLsum1 >=22){
                            cout << "DEALER BUST!" << endl;
                        }
                        else if(DLsum1 <=16){
                            cout << "Dealer's hand is less than 17. Dealer draws." << endl;
                            cout << DLcard3 << endl;
                            cout << "\t\t\t" << "Dealer's Hand: " << DLsum2 << endl;
                            
                            //Displays Winner
                            if(DLsum2 < PLsum1){
                            cout << "YOU WIN!" << endl;
                            }
                            else if(DLsum2 > PLsum1){
                                cout << "YOU LOSE!" << endl;
                            }
                        }
                    }
                }
                
            }
                //Display dealer's turn
                else{
                    cout << "Dealer's Hole Card: " << DLcard2 << endl;
                    cout << "\t\t\t" << "Dealer's Hand: " << DLsum1 << endl;
                    
                    //Displays and calculates dealer's card value. 
                    if(DLsum1 >= 22){
                        cout << "DEALER BUST!" << endl;
                    }
                    else if(DLsum1 <=16){
                        cout << "Dealer's hand is less than 17. Dealer draws." << endl;
                        cout << DLcard3 << endl;
                        cout << "\t\t\t" << "Dealer's Hand: " << DLsum2 << endl;
                        
                        //Displays Winner
                        if(DLsum2 < PLsum1){
                            cout << "YOU WIN!" << endl;
                        }
                        else if(DLsum2 > PLsum1){
                            cout << "YOU LOSE!" << endl;
                        }
                    }
            }
            }
        }
        
        else{
            stop = true;
        }
        }
    }while(stop=true);
    return 0;
}
    