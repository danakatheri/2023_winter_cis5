
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
 
void display(string);
void display2( int, int , int, int [], int [], string, bool);
int roll(int, int, int[], int[]);
bool cwin(int, int, int, string);
bool again (int, int, char, string);
int main(int argc, char** argv) {
    
    //variables 
    
    int dice1,dice2, rolls,total, diff; 
    int sum = 0; // sum of the dices
    char choice; // choice of either yes or no
    char check; // to know if they win or lose
    string name; // players name
    int target; // target number 
    int count[6]; // count array
    int history[3000]; // 
    
    
   
    bool play = true; 
    
    // random number seed
     
    
    cout<<endl;
    
    //introduction to the game
    
    display(name);
    display2(target, rolls, sum, count, history, name, play);
    
            
    return 0;
}

void display(string name){
    cout<< " \t Guessing game with dice\n";
    cout<< "Pick your targeted amount"<<endl;
    cout<< "Proceed to roll as any dice to get your targeted amount"<<endl;
    cout<< "What is your name?"<<endl;
    cin>> name;
}

void display2(int target, int rolls, int sum, int count[6], int history[], string name, bool play){
    
   
    while(play == true){    
        cout<<"what is play right now:"<<play<<endl;
     cout<< "What number do you want to target to from 1-21?"<<endl; 
            cin >> target;
            
            // input validation 
            if (target>21 || target < 1){ 
                cout<<"Invalid Input, Please enter a number from 1-21"<<endl;
                cin >> target;
            }
            //if sum of the dice is less than the target, continue
            while (sum<=target){ 
                cout<< "Do you want to roll 1 or 2 dice? ⚃"<<endl;
                cin >> rolls;
                
                if (rolls == 1){
                    sum = roll(rolls,sum, count, history);
                    cout<<"sumafter1roll:"<<sum<<endl;
                    
                    
                    
                }
                else if (rolls == 2){
                    sum =roll(rolls, sum, count,history);
                    cout<<"sumafter2roll:"<<sum<<endl;
                    
                    
                }
                play = cwin(sum, target, rolls, name);
                    cout<<"value of play:"<<play<<endl;
                    if (play == true){
                        sum = 0;
                                rolls =0;
                            break;    
                                
                    }
                    
                
                
        }
        
                    
    }
        
}

int roll(int rolls, int sum, int count[6], int history[]){
    int dice1,dice2;
   
    
    if (rolls == 1){ 
                            //subtract one 
                            rolls--; 
                            cout<<"rolls1: "<<rolls<<endl;
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
                                    cout<<"sumd11:"<<sum<<endl;
                                    count[0]+=1;
                                    
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
                                    cout<<"sumd12:"<<sum<<endl;
                                    count[1]+=1;
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
                                    cout<<"sumd13:"<<sum<<endl;
                                    count[2]+=1;
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
                                    cout<<"sumd14:"<<sum<<endl;
                                    count[3]+=1;
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
                                    cout<<"sumd15:"<<sum<<endl;
                                    count[4]+=1;
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
                                    cout<<"sumd16:"<<sum<<endl;
                                    count[5]+=1;
                                }
                                //else if

                                cout << endl;
                                cout<<"sum:"<<sum<<endl;
                                return sum;
                                }
    
                        //dice #2      
                        else if (rolls == 2){ 
                            rolls -= 2;
                            cout<<"rolls2: "<<rolls<<endl;
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
                                    cout<<"sumd211:"<<sum<<endl;
                                    count[0]+=1;
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
                                    cout<<"sumd212:"<<sum<<endl;
                                    count[1]+=1;
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
                                    cout<<"sumd213:"<<sum<<endl;
                                    count[2]+=1;
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
                                    cout<<"sumd214:"<<sum<<endl;
                                    count[3]+=1;
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
                                    cout<<"sumd215:"<<sum<<endl;
                                    count[4]+=1;
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
                                    cout<<"sumd216:"<<sum<<endl;
                                    count[5]+=1;
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
                                    cout<<"sumd221:"<<sum<<endl;
                                    count[0]+=1;
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
                                    cout<<"sumd222:"<<sum<<endl;
                                    count[1]+=1;
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
                                    cout<<"sumd223:"<<sum<<endl;
                                    count[2]+=1;
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
                                    cout<<"sumd224:"<<sum<<endl;
                                    count[3]+=1;
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
                                    cout<<"sumd225:"<<sum<<endl;
                                    count[4]+=1;
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
                                    cout<<"sumd226:"<<sum<<endl;
                                    count[5]+=1;
                                
                                
                                }//else if
                                cout<<"sum:"<<sum<<endl;
                                return sum;
                            }
   
}
bool cwin(int sum, int target,int rolls, string name){
    int diff;
    char check;
    bool end;
    diff = target - sum; 
                        
                        // states total amount
                        cout <<"You total amount so far is " <<sum<<endl; 
                        cout << "The difference between what you rolled and your target number is:  "<<diff<<endl;
                        // to find out what they need to go to left
                        cout<<"what is end here:"<<end<<endl;
                        //to use switch case 
                        //if the sum is the target go to 'w'
                        if(sum==target){
                            check = 'W';
                            
                        }
                        //if the sum is greater than the target, go to 'l'
                        else if (sum>target){
                            check= 'L';
                                    
                        }
                        else if (sum < target){
                            
                            cout<<"what is end in else:"<< end<<endl;
                            
                            
                        }
                        //the message to the player of what their results are 
                        switch(check){
                            case 'W':
                                cout << "You won " <<name<<"!!! :D "<<endl;
                                end = again(sum, rolls, check, name);
                                cout<<"what is end in w:"<< end<<endl;
                                return end;
                               
                                  
                            case 'L':
                                cout << "You lost! Sorry "<<name<<" :( "<<endl;
                                end = again(sum, rolls, check, name);
                                cout<<"what is end in l:"<< end<<endl;
                                return end;
                                
                        }
                        return end;
                       
}

bool again (int sum, int rolls, char check, string name){
    char choice;
     cout<<"Do you want to play again? y/n"<<endl; 
            cin>> choice;
            switch(choice){
                case 'y':
                            // go back to loop
                           
                                
                                return true;
                                
                            
            //ends game
            case 'n' :
                return false;
                                cout<< "Thank you for playing "<<name<<"!!!!"<<endl;
                               
                            
            }
    
}