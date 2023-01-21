/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/13/2023
 * Purpose:  gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float pay;
    int hours;
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "This program calculates the gross paycheck."<<endl;
    cout << "Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin >> pay;
    cin >> hours;
    float grossp;
    if (hours > 40)
        grossp = (pay * 40) + (2.0 * pay * (hours - 40));
    else 
        grossp = pay * hours;
        
    cout <<  "Paycheck = $" << fixed << setprecision(2) << setw(7) << grossp;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}