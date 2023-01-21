/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/13/23 6:42pm
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // format library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
        float deathM = 5; // sweetner to kill mouse in grams
        float massM = 35; // mass of mouse in grams
    
        const int soda = 350; // soda mass in grams
        const float weightS = 0.001; // soda percent of sweetner
        
        float weight, dth, kill;   // desired weight, death ratio and number 
                                   // of sodas to kill 
                                   
        float sodaswt;  //weight of sweetner in soda
        float killman;  // number of cans to kill a man
        float change; // weight lbs to grams
        
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout <<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout << "Input the desired dieters weight in lbs."<<endl;
    cin >> weight;
    
    change = weight * 453.592;
    dth = deathM/massM;
    kill = dth * change;
    sodaswt = weightS * soda;
    killman = kill/sodaswt;
    
    
    cout << "The maximum number of soda pop cans"<<endl;
    cout << "which can be consumed is " <<static_cast<int>(killman) << " cans";
    //Exit stage right or left!
    return 0;
}