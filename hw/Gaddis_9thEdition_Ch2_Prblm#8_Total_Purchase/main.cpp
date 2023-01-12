/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 11, 2023, 5:37 PM
 * Purpose: Total Purchase 
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
  
    float item1 = 15.95,
          item2 = 24.95,
          item3 = 6.95,
          item4 = 12.95,
          item5 = 3.95, //prices of each item bought
    //Declare Variables
    subT = item1 + item2 +item3 + item4 + item5, //sum of items
    tax = .07 ,
    ttotal = subT * tax, //sum of items and tax
    etotal = ttotal + subT;
    //Initialize Variables
    
    //Map/process the Inputs-> Outputs
    
    //Display Inputs/Outputs
    cout <<"The grand total of the five items are $"<<subT<< " with a ";
    cout  <<tax<< " tax "<<"is $"<<etotal<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}


