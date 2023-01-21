/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/13/23 9:17pm
 * Purpose:  Compensaton
*/
//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // format libaray
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random
    
    float payup = 0.076; // pay increase
    
    float annuals;
 
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Input previous annual salary." <<endl;
    cin >> annuals;
    
    float retroP , monthly, salary;
    
    retroP = ((salary + annuals)/2)* payup;
    
    salary = annuals + ( annuals * payup); // new annual salary
    
    monthly = salary / 12; // new monthly salary
    
    
    
    
    cout<<"Retroactive pay    = $"<<setw(7)<<fixed<<setprecision(2)<<retroP<<endl;
    cout<<"New annual salary  = $"<<fixed<<setprecision(2)<<salary<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<fixed<<setprecision(2)<<monthly;
    //Exit stage right or left!
    return 0;
}