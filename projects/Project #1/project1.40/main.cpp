
/* 
 * File:   main.cpp
 * Author: danak
 * Created on Feb 2,2023 
 * Purpose: Project #1
 */
//System Lib

#include <iostream> //Input Output Library
#include <ctime> 
#include <iomanip>
#include <cstdlib> 
#include <string>
using namespace std;
 

int main(int argc, char** argv) {
    
    //variables 
    
    int dice1,dice2, rolls,total, diff; 
    int sum = 0; // sum of the dices
    char choice; // choice of either yes or no
    int check; // to know if they win or lose
    string name; // players name
    int target; // target number 
   
    bool again = true; 
    
    // random number seed
    srand(time(0));  
    
    cout<<endl;
    
    //introduction to the game
    
    cout<< " \t Guessing game with dice\n";
    cout<< "Pick your targeted amount"<<endl;
    cout<< "Proceed to roll as any dice to get your targeted amount"<<endl;
    cout<< "What is your name?"<<endl;
    cin>> name;
    
    do{
        //asking the user how many they want to target & user inputs answer
        cout<< "What number do you want to target to from 1-21?"<<endl; 
            cin >> target;
            
            // input validation 
            if (target>21 || target < 1){ 
                cout<<"Invalid Input, Please enter a number from 1-21"<<endl;
                cin >> target;
            }
            //if sum of the dice is less than the target, continue
            while (sum<=target){ 
                cout<< "Do you want to roll 1 or 2 dice?"<<endl;
                cin >> rolls;
                
                    // if rolls does not equal zero
                    while(rolls != 0){ 
                        // if roll equal to one
                        if (rolls == 1){ 
                            //subtract one 
                            rolls--; 
                            //dice #1 and randomize the number
                            //value of dice #1 (1-6) 
                            dice1 = rand() % 6 + 1; 
                                if (dice1 == 1) 
                                {
                                    cout << "=============" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|     ●    |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 1; 
                                }//if
                                else if (dice1 == 2)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●        |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|        ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 2; 
                                }//else if
                                else if (dice1 == 3)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●         |" << endl;
                                    cout << "|     ●     |" << endl;
                                    cout << "|         ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 3; 
                                }//else if
                                else if (dice1 == 4)
                                {
                                    cout << "============" << endl;
                                    cout << "| ●     ● |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "| ●     ● |" << endl;
                                    cout << "============" << endl;
                                    // adds to sum
                                    sum += 4; 
                                }//else if
                                else if (dice1 == 5)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "|     ●     |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 5; 
                                }
                                //else if
                                else if (dice1 == 6)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 6; 
                                }
                                //else if

                                cout << endl;
                                
                                }
                        //dice #2      
                        else if (rolls == 2){ 
                            rolls -= 2;
                            //value of dice #1 (1-6)
                            dice1 = rand() % 6 + 1;
                            //value of dice #2 (1-6)
                            dice2 = rand() % 6 + 1;
    
                                if (dice1 == 1)
                                {
                                    cout << "=============" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|     ●    |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 1; 
                                }//if
                                else if (dice1 == 2)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●        |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|        ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 2; 
                                }//else if
                                else if (dice1 == 3)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●         |" << endl;
                                    cout << "|     ●     |" << endl;
                                    cout << "|         ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 3; 
                                }//else if
                                else if (dice1 == 4)
                                {
                                    cout << "============" << endl;
                                    cout << "| ●     ● |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "| ●     ● |" << endl;
                                    cout << "============" << endl;
                                    // adds to sum
                                    sum += 4; 
                                }//else if
                                else if (dice1 == 5)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "|     ●     |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 5;
                                }//else if
                                else if (dice1 == 6)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 6; 
                                }//else if

                                cout << endl;

                                if (dice2 == 1)
                                {
                                    cout << "=============" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|     ●    |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 1; 
                                }//if
                                else if (dice2 == 2)//
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●        |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|        ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 2; 
                                }//else if
                                else if (dice2 == 3)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●         |" << endl;
                                    cout << "|     ●     |" << endl;
                                    cout << "|         ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 3; 
                                }//else if
                                else if (dice2 == 4)
                                {
                                    cout << "============" << endl;
                                    cout << "| ●     ● |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "| ●     ● |" << endl;
                                    cout << "============" << endl;
                                    // adds to sum
                                    sum += 4; 
                                }//else if
                                else if (dice2 == 5)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "|     ●     |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 5; 
                                }//else if
                                else if (dice2 == 6)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "| ●      ● |" << endl;
                                    cout << "=============" << endl;
                                    // adds to sum
                                    sum += 6; 
                                
                                
                                }//else if   
                            }
                        }
                    // what they need to target amount
                    
                    diff = target - sum; 
                        
                        // states total amount
                        cout <<"You total amount so far is " <<sum<<endl; 
                        cout << "The difference between what you rolled and your target number is:  "<<diff<<endl;
                        // to find out what they need to go to left
                        
                        //to use switch case 
                        //if the sum is the target go to 'w'
                        if(sum==target){
                            check = 'W';
                            
                        }
                        //if the sum is greater than the target, go to 'l'
                        else if (sum>target){
                            check= 'L';
                                    
                        }
                        //the message to the player of what their results are 
                        switch(check){
                            case 'W':
                                cout << "You won " <<name<<"!!! :D "<<endl;
                                break;
                            case 'L':
                                cout << "You lost! Sorry "<<name<<" :( "<<endl;
                                break;
                        }
                        
            }
            //asking if they want to play again
            cout<<"Do you want to play again? y/n"<<endl; 
            cin>> choice;
            if (choice == 'y'){
                            // go back to loop
                            again = true;
                                sum = 0;
                                rolls =0;
                                check = ' ';
                            }
            //ends game
            else if(choice == 'n'){ 
                            again = false;
                                cout<< "Thank you for playing "<<name<<"!!!!"<<endl;
                            }

        }while (again != false);
            
    return 0;
}