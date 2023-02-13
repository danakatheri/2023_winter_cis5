

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
    
    int dice1,dice2; 
    float total;
    char choice;
    string answer;
    
    srand(time(0));  // random number seed
    
    cout<<endl;
    
    cout<< " \t Welcome to the game of doubles."<<endl;
    cout<< " In order to win, you need to roll the dice and"<<endl;
    cout<< " obtain two of the same numbers, hence doubles."<<endl;
    
    dice1 = rand() % 6 + 1;//value of dice #1 (1-6)
    dice2 = rand() % 6 + 1;//value of dice #2 (1-6)
    
    if (dice1 == 1)
{
    cout << "=============" << endl;
    cout << "|           |" << endl;
    cout << "|     ●    |" << endl;
    cout << "|           |" << endl;
    cout << "=============" << endl;
}//if
else if (dice1 == 2)
{
    cout << "=============" << endl;
    cout << "| ●        |" << endl;
    cout << "|           |" << endl;
    cout << "|        ● |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice1 == 3)
{
    cout << "=============" << endl;
    cout << "| ●         |" << endl;
    cout << "|     ●     |" << endl;
    cout << "|         ● |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice1 == 4)
{
 cout << "============" << endl;
    cout << "| ●     ● |" << endl;
    cout << "|           |" << endl;
    cout << "| ●     ● |" << endl;
    cout << "============" << endl;
}//else if
else if (dice1 == 5)
{
    cout << "=============" << endl;
    cout << "| ●      ● |" << endl;
    cout << "|     ●     |" << endl;
    cout << "| ●      ● |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice1 == 6)
{
    cout << "=============" << endl;
    cout << "| ●      ● |" << endl;
    cout << "| ●      ● |" << endl;
    cout << "| ●      ● |" << endl;
    cout << "=============" << endl;
}//else if

cout << endl;


if (dice2 == 1)
{
    cout << "=============" << endl;
    cout << "|           |" << endl;
    cout << "|     ●    |" << endl;
    cout << "|           |" << endl;
    cout << "=============" << endl;
}//if
else if (dice2 == 2)//
{
    cout << "=============" << endl;
    cout << "| ●        |" << endl;
    cout << "|           |" << endl;
    cout << "|        ● |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 3)
{
    cout << "=============" << endl;
    cout << "| ●         |" << endl;
    cout << "|     ●     |" << endl;
    cout << "|         ● |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 4)
{
    cout << "============" << endl;
    cout << "| ●     ● |" << endl;
    cout << "|           |" << endl;
    cout << "| ●     ● |" << endl;
    cout << "============" << endl;
}//else if
else if (dice2 == 5)
{
    cout << "=============" << endl;
    cout << "| ●      ● |" << endl;
    cout << "|     ●     |" << endl;
    cout << "| ●      ● |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 6)
{
    cout << "=============" << endl;
    cout << "| ●      ● |" << endl;
    cout << "| ●      ● |" << endl;
    cout << "| ●      ● |" << endl;
    cout << "=============" << endl;
}//else if
    

    //randomize dice :* 
    return 0;
}


