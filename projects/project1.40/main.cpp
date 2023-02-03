
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
    
    int dice1,dice2, target, rolls,total, diff; 
    float sum;
    char choice;
    int check;
    bool again = true;
    
    
    srand(time(0));  // random number seed
    
    cout<<endl;
    
    cout<< " \t Blackjack with Dice"<<endl;
    
    do{
        cout<< "What number do you want to target to from 1-21?"<<endl;
            cin >> target;
            while (target>21 || target < 1){
                cout<<"Invalid Input, Please enter a number from 1-21"<<endl;
                cin >> target;
            }
   
            while (sum<=target){
                cout<< "Do you want to roll 1 or 2 dice?"<<endl;
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
                    diff = target - sum;
                                
                        cout <<"You total amount so far is " <<sum<<endl;
                        cout << "The difference between what you rolled and your target number is:  "<<diff<<endl;
                        
                        
                        
                                
                
                        
                        if(sum==target){
                            check = 'W';
                            
                        }
                        else if (sum>target){
                            check= 'L';
                                    
                        }
                        
                        switch(check){
                            case 'W':
                                cout << "You won!!!"<<endl;
                                break;
                            case 'L':
                                cout << "You lost!"<<endl;
                                break;
                        }
                        
            }
            cout<<"Do you want to play again? y/n"<<endl;
            cin>> choice;
            if (choice == 'y'){
                            again = true;
                                sum = 0;
                                rolls =0;
                                check = ' ';
                            }
            else if(choice == 'n'){
                            again = false;
                                cout<< "Thank you for playing."<<endl;
                            }
                        
            
            
        }while (again != false);
            
    
    return 0;
}