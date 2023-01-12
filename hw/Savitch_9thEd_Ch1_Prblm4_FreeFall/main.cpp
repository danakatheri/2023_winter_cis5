
/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 9, 2023
 * Purpose: Free Fall
 * 
 */
//System Lib

#include <iostream> //Input Output Library
#include <cstdlib> //Utilizes random numbers
using namespace std;

//User LIBRARIES
 
 //Global Constants not Variables

//Science, Math, Conversions, Dimensions
float GRAVITY=3.2174e1f;//gravity 32.174 ft/sec^2
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
     //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float drop, // distance the object falls in feet
            tim; // time in secs
    //Initialize Variables
    tim=rand()%9+1; // time from 1 to 10 seconds
    tim=1;
         
    //Map/process the Inputs-> Outputs
    //drop=1.0f/2*GRAVITY*tim*tim;
    //drop=1/2.0f*GRAVITY*tim*tim;
    drop=GRAVITY*tim*tim/2;
    //Display Inputs/Outputs
    cout <<"this program calculates distance in free fall"<<endl;
    cout <<"the time drop = "<<tim<<" seconds "<<endl;
    cout <<"the distance drop= " <<drop<< " feet" <<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}


