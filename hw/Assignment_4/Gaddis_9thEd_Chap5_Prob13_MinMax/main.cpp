/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int integer = -99;
    int number = 0;
    int min = 10000;
    int max = -10000;
        
    //Declare Variables
    //Initialize or input i.e. set variable values
    while ( number != integer)
    {
        cin >> number;
        if(number == integer){
            break;
        }
        if (number < min)
            min = number;
            
        if (number > max)
            max = number;
            
    }
    //Map inputs -> outputs
    cout <<"Smallest number in the series is "<< min <<endl;
    cout << "Largest  number in the series is "<< max;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}