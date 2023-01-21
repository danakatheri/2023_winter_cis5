/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/12/23 10:08pm
 * Purpose:  Insurance
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Format Libiary
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Set the random number seed
    float perc = .80; // percent of amount it would cost to replace the structure
    
    float price; // replacement cost 
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
   cout << "Insurance Calculator"<<endl;
   cout << "How much is your house worth?"<<endl;
   cin >> price;
   
   float total = price * perc;
   
   cout<<"You need $" <<total<< " of insurance.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}