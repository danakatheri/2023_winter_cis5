

/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 12, 2023; 3:09pm
 * Purpose: Optimal Choice for Filling Your Vehicle.
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
    float mpg= 16;                           // Miles per Gallon
    float tnksz = 22;                        // Size of Gas Tank Gallon
    float fuelg = .25;                       // Fuel Gage Reading
    float fillt = 16.5;                      // To fill the Tank in Gallons
    
    float dst1 = 10;                         // Distance to Station 1 in miles
    float gas1 = 0.625;                      // Gas used to get to Station 1 in Gallons
    float gasp1 = 3.85;                      // Price/Gallon
    float total1 = 65.93;                    // Cost to fill at Station 1
    
    float dst2 = .5;                          // Distance to station 2 in miles
    float gas2 = 0.03125;                     // Gas used to get to station 2 in Gallons
    float gasp2 = 3.95;                       // price/gallon
    float total2 = 65.30;                     // Cost to fill at Station 2
    //Initialize Variables
    
    float tankf = tnksz * fuelg;              //Current amount of gallons in car
    float used1 = dst1/mpg;                   //Gas used to get to station 1
    float used2 = dst2/mpg;                   //Gas used to get to station 2
    float gleft1 = tankf - used1;             //Gas amount at station 1
    float gleft2 = tankf - used2;             //Gas amount at station 2
    float cost1 = (tnksz - gleft1)* gasp1;    //Cost to fill at station 1
    float cost2 = (tnksz - gleft2)* gasp2;    //Cost to fill at station 2
    
    
    
    //Map/process the Inputs-> Outputs
    
    //Display Inputs/Outputs
    cout << "Since my car is low on gas, I have two gas stations to decide on. "<<endl;
    cout << "My car runs " << mpg<< " miles per gallon and fill up to "<<tnksz<<" gallons."<<endl;
    cout << "Right now I have " << fuelg << " left and need "<< fillt <<" gallons to fill up my tank.\n";
    cout << endl;
    
    cout << "Station 1 which cost $"<< gasp1 << " per gallon and is " << dst1 << " miles away"<<endl;
    cout << used1 << " of my gas to get there, it would cost me $ " << cost1;
    cout << " for me to fill up there."<<endl;
    cout << endl;
    
    cout << "Station 2 which cost $"<< gasp2 << " per gallon and is " << dst2 << " miles away"<<endl;
    cout << used2 << " of my gas to get there, it would cost me $ " << cost2;
    cout << " for me to fill up there."<<endl;
    cout << endl;
    cout << "It is better to fill up at station 2."<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

