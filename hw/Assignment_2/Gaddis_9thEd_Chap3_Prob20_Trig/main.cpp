/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/13/23
 * Purpose:  Trig Functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // set precision
#include <cmath> // sin(), cos(), and tan()
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float degrees;
    float x;    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
        cout << "Calculate trig functions"<<endl;
        cout << "Input the angle in degrees."<<endl;
        cin >> degrees;
        x = degrees * M_PI / 180;
        
        
        cout << "sin("<< degrees <<") = " <<setprecision(4) << fixed<< sin(x) << endl;
        cout << noshowpoint << setprecision(0)<< fixed << "cos("<< degrees <<") = " <<setprecision(4) << fixed<< cos(x) << endl;
        cout << noshowpoint << setprecision(0)<< fixed << "tan("<< degrees <<") = " <<setprecision(4) << fixed<< tan(x);
    //Exit stage right or left!
    return 0;
}