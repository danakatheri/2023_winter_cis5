
/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 11, 2023, 6:02 PM
 * Purpose: Lab Assignment Percentages 
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
    float milBdgt,fedBdgt,mlPrcnt;
    
    milBdgt=7.77e11f;    //Military Budget = 777 Billion   
    fedBdgt=6.272e12f;    //Federal Budget  = 6.272 Trillion
    
    mlPrcnt = milBdgt / fedBdgt;
    //Declare Variables
    
    //Initialize Variables
    
    //Map/process the Inputs-> Outputs
    
    //Display Inputs/Outputs
    cout<< "The percentage of the military budget as a percentage of the ";
    cout << "federal budget is "<<mlPrcnt<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

