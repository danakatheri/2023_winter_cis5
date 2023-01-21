/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // format library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...=
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
   int inputN = 0;
   int pos = 0;
   int neg = 0; 
   int total = 0;
    //Declare Variables
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    cout << "Input 10 numbers, any order, positive or negative"<<endl;
    for(int i=0;i<10;i++){ 
         cin >> inputN;
    
           total += inputN;
    
            if (inputN > 0)
                 pos += inputN;
            else 
                 neg += inputN;
            
    }

    //Display the outputs
    cout << "Negative sum =" << setw(4) << neg <<endl;
    cout << "Positive sum =" << setw(4) << pos <<endl;
    cout << "Total sum    =" << setw(4) << total;
    //Exit stage right or left!
    return 0;
}