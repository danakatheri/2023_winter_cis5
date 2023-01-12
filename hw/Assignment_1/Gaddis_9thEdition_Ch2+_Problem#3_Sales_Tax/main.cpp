

/* 
 * File:   main.cpp
 * Author: danak
 * Created on January 6, 2023, 2:08 PM
 * Purpose: Template to be used for all future hw,labs, exams, projects
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
    float tsale = 95; //total sales in dollars
    float sttax = .04; // state sales tax
    float cttax = .02; // county sales tax
    
    //Initialize Variables
    float statep = tsale * sttax; //state sales tax x total sale
    float cntyp = tsale * cttax; // county sales x total sale
   
    //Map/process the Inputs-> Outputs
    float tprice = tsale + statep + cntyp; //total sales price x stax
    //Display Inputs/Outputs
    cout << "The total price on a $" <<tsale<< " purchase with ";
    cout << sttax << " state sales and " << cttax << " county sales ";
    cout << "is $" <<tprice<< endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}
