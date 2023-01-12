/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 9, 2023, 9:23pm
 * Purpose: Sale Prediction
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
    
    //Declare Variables
   float pots = .58; // percent of total sales
   float comps = 8600000; // generated company sales
    //Initialize Variables
    
    //Map/process the Inputs-> Outputs
    
    //Display Inputs/Outputs
            float fnls = comps * pots; // predicted sales 
   cout << "The East Coast division will generate $";
   cout << fnls << " if the company has $8.6 million sales this year";
    //Clean up memory and files
    
    //Exit the program
    return 0;
}