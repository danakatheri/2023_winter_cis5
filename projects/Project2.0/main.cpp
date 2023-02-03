

/* 
 * File:   main.cpp
 * Author: danak
 * Created on Feb 2,2023 
 * Purpose: Template to be used for all future hw,labs, exams, projects
 * 
 */
//System Lib

#include <iostream> //Input Output Library
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;
 

int main(int argc, char** argv) {
    
    int dice1,dice2, number, rolls,total, diff; 
    float sum;
    char choice;
    string sumCheck;
    bool again = true;
     
    
    srand(time(0));  // random number seed
    
    cout<<endl;
    
    cout<< " \t Guessing game with dice."<<endl;
    
    do{
        cout<< "What number do you want to target to from 1-25?"<<endl;
            cin >> number;
            while (number>25 || number < 1){
                cout<<"Invalid Input, Please enter a number from 1-25"<<endl;
                cin >> number;
            }
   
            while (sum<=number){
                cout<< "Do you want to roll 1 or 2 dice? Enter '0' to end"<<endl;
                cin >> rolls;
                    while(rolls != 0){
                        if (rolls == 1){
                            rolls--;
                            dice1 = rand() % 6 + 1;//value of dice #1 (1-6)  
                                if (dice1 == 1)
                                {
                                    cout << "=============" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|     ●    |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "=============" << endl;
                                    sum += 1;
                                }//if
                                else if (dice1 == 2)
                                {
                                    cout << "=============" << endl;
                                    cout << "| ●        |" << endl;
                                    cout << "|           |" << endl;
                                    cout << "|        ● |" << endl;
                                    cout << "=============" << endl;
                                    sum += 2;
                                }//else if
                                else if (dice1 == 3)
                                {
                                cout << "=============" << endl;
                                cout << "| ●         |" << endl;
                                cout << "|     ●     |" << endl;
                                cout << "|         ● |" << endl;
                                cout << "=============" << endl;
                                sum += 3;
                                }//else if
                                else if (dice1 == 4)
                                {
                                cout << "============" << endl;
                                cout << "| ●     ● |" << endl;
                                cout << "|           |" << endl;
                                cout << "| ●     ● |" << endl;
                                cout << "============" << endl;
                                sum += 4;
                                }//else if
                                else if (dice1 == 5)
                                {
                                cout << "=============" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "|     ●     |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "=============" << endl;
                                sum += 5;
                                }//else if
                                else if (dice1 == 6)
                                {
                                cout << "=============" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "=============" << endl;
                                sum += 6;
                                }//else if

                                cout << endl;
                                
                                }
                                
                        else if (rolls == 2){
                            rolls -= 2;
                            dice1 = rand() % 6 + 1;//value of dice #1 (1-6)
                            dice2 = rand() % 6 + 1;//value of dice #2 (1-6)
    
                                if (dice1 == 1)
                                {
                                cout << "=============" << endl;
                                cout << "|           |" << endl;
                                cout << "|     ●    |" << endl;
                                cout << "|           |" << endl;
                                cout << "=============" << endl;
                                sum += 1;
                                }//if
                                else if (dice1 == 2)
                                {
                                cout << "=============" << endl;
                                cout << "| ●        |" << endl;
                                cout << "|           |" << endl;
                                cout << "|        ● |" << endl;
                                cout << "=============" << endl;
                                sum += 2;
                                }//else if
                                else if (dice1 == 3)
                                {
                                cout << "=============" << endl;
                                cout << "| ●         |" << endl;
                                cout << "|     ●     |" << endl;
                                cout << "|         ● |" << endl;
                                cout << "=============" << endl;
                                sum += 3;
                                }//else if
                                else if (dice1 == 4)
                                {
                                cout << "============" << endl;
                                cout << "| ●     ● |" << endl;
                                cout << "|           |" << endl;
                                cout << "| ●     ● |" << endl;
                                cout << "============" << endl;
                                sum += 4;
                                }//else if
                                else if (dice1 == 5)
                                {
                                cout << "=============" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "|     ●     |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "=============" << endl;
                                sum += 5;
                                }//else if
                                else if (dice1 == 6)
                                {
                                cout << "=============" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "=============" << endl;
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
                                sum += 1;
                                }//if
                                else if (dice2 == 2)//
                                {
                                cout << "=============" << endl;
                                cout << "| ●        |" << endl;
                                cout << "|           |" << endl;
                                cout << "|        ● |" << endl;
                                cout << "=============" << endl;
                                sum += 2;
                                }//else if
                                else if (dice2 == 3)
                                {
                                cout << "=============" << endl;
                                cout << "| ●         |" << endl;
                                cout << "|     ●     |" << endl;
                                cout << "|         ● |" << endl;
                                cout << "=============" << endl;
                                sum += 3;
                                }//else if
                                else if (dice2 == 4)
                                {
                                cout << "============" << endl;
                                cout << "| ●     ● |" << endl;
                                cout << "|           |" << endl;
                                cout << "| ●     ● |" << endl;
                                cout << "============" << endl;
                                sum += 4;
                                }//else if
                                else if (dice2 == 5)
                                {
                                cout << "=============" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "|     ●     |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "=============" << endl;
                                sum += 5;
                                }//else if
                                else if (dice2 == 6)
                                {
                                cout << "=============" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "| ●      ● |" << endl;
                                cout << "=============" << endl;
                                sum += 6;
                                
                                
                                }//else if   
                               
                                
                        }
                    }
                    diff = number - sum;
                                
                        cout <<"You total amount so far is " <<sum<<endl;
                        cout << "The difference between what you rolled and your target number is:  "<<diff<<endl;
                        
                        if(sum==number){
                            
                            cout<<"YOU WIN!"<<endl;
                            
                        }
                        else if (sum>number){
                            cout<<"sucks to sucks"<<endl;
                           
                          
                        }
                }
            cout<<"Do you want to play again? y/n"<<endl;
            cin>> choice;
            if (choice == 'y'){
                again = true;
            }
            else if(choice == 'n'){
                again = false;
                cout<< "Thank you for playing."<<endl;
            }
            }while (again != false);
            
    
    return 0;
    
    //when asked to play again, it ask your target number but ask if you want to play again
    //starts to total from perivous game sum
}




