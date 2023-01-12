

/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 11, 2023, 4:54pm
 * Purpose: Average of Values
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
    int a = 28, 
        b = 32, 
        c = 37, 
        d = 24, 
        e = 33, 
    //Declare Variables
    sum = a + b + c + d + e, // sum of all 5 numbers
    //Initialize Variables
    avg = sum / 5; //average of 5 numbers
    //Map/process the Inputs-> Outputs
    
    //Display Inputs/Outputs
    cout <<"The average of the following numbers ";
    cout << a<< ", "<<b<<", "<<c<<", "<<d<<",and "<<e;
    cout <<" is " <<avg<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

