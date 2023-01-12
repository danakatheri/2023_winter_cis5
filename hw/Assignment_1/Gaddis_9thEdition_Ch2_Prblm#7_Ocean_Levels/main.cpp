/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 11, 2023, 5:23pm
 * Purpose: Ocean Levels
 * 
 */
//System Lib

#include <iostream> //Input Output Library

using namespace std;

//User LIBRARIES
 
 //Global Constants not Variables

//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    float oceanL = 1.5, // ocean levels rising per year in millimeters 
          fiveY = 5 * 1.5, // ocean levels in 5 years
          svnY = 7 * 1.5, // ocean levels in 7 years
          tenY = 10 * 1.5; // ocean levels in 10 years
    //Declare Variables
    
    //Initialize Variables
    
    //Map/process the Inputs-> Outputs
    cout <<"The current ocean level is rising at "<<oceanL<<" millimeters",
    cout <<" per year. In five years it will be at " << fiveY<<", in seven ",
    cout << "years, it will be " <<svnY<<", and in ten years, it will be at ",
    cout <<tenY<<" millimeters."<<endl;
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

