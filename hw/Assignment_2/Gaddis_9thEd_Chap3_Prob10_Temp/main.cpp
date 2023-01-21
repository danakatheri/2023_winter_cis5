/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/12/23 10:16pm
 * Purpose:  Temperature
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float tempF;
    float tempC;
    //Initialize or input i.e. set variable values
   
    //Map inputs -> outputs
    
    //Display the outputs
    cout <<"Temperature Converter"<<endl;
    cout <<"Input Degrees Fahrenheit"<<endl;
    cin >> tempF;
    
    tempC = (5.0 / 9.0) * (tempF-32);
    cout << setprecision(1) <<fixed;
    cout<< tempF<< " Degrees Fahrenheit = " << tempC <<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}
