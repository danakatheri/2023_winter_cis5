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
    
    //Declare Variables
    float roomcpt , nmbrp, sum;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Input the maximum room capacity and the number of people"<< endl;
    cin >> roomcpt;
    cin >> nmbrp;
    sum = roomcpt - nmbrp;
     
    if (sum > 0){
             cout << "Meeting can be held."<<endl;
             cout << "Increase number of people by " << sum << " will be allowed without violation.";
    }
    else{
            sum = sum * -1;
            cout << "Meeting cannot be held."<<endl;
            cout << "Reduce number of people by " << sum << " to avoid fire violation.";
    }

    //Exit stage right or left!
    return 0;
}