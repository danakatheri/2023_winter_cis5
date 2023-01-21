/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/17/23 10:11pm
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char p1;
    char p2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Rock Paper Scissors Game"<<endl;
    cout << "Input Player 1 and Player 2 Choices"<<endl;
    cin >> p1;
    cin >> p2;
    
    if (p1 == p2)
        cout << "Nobody wins.";
    if((p1 == 'P' && p2 == 'p' ) || (p1 == 'p' && p2 == 'P') ) 
        cout << "Nobody wins.";
    if ((p1 == 'S' && p2 == 's') || (p1 == 's' && p2 == 'S') ) 
        cout << "Nobody wins.";
    if ((p1 == 'R' && p2 == 'r') || (p1 == 'r' && p2 == 'R') ) 
        cout << "Nobody wins.";
    
    if ((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r')) 
        cout << "Paper covers rock.";
    if ((p1 == 'R' || p1 == 'r') && (p2 == 'p' || p2 == 'P') )
        cout << "Paper covers rock.";
        
    if ((p1 == 'P' || p1 == 'p' ) &&  (p2 == 'S' ||p2 == 's') )
        cout << "Scissors cuts paper.";
    if ((p1 == 'S' || p1 == 's') &&  (p2 == 'P' || p2 == 'p' ) )
        cout << "Scissors cuts paper.";
    
    if ((p1 == 'R' || p1 == 'r') &&  (p2 == 'S' || p2 == 's') )
        cout << "Rock breaks scissors.";
    if ((p1 == 'S' || p1 == 's') &&  (p2== 'R' || p2 == 'r') )
        cout << "Rock breaks scissors.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}