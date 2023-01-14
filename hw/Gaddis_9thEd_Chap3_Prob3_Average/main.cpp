/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/12/23 9:11pm
 * Purpose:  Test Average
/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/12/23 9:11pm
 * Purpose:  Test Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Format libaray 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int nmbrsc = 5;
    //Declare Variables
    float score1;
    float score2;
    float score3;
    float score4;
    float score5;
    float avg;
    float total;
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average."<<endl;
    
    //Map inputs -> outputs
    
    cin >> score1;
    
    cin >> score2;
    
    cin >> score3;
    
    cin >> score4;
    
    cin >> score5;
    //Display the outputs
    total = score1 + score2 + score3 + score4 + score5;
    avg = total / nmbrsc;
    
    cout << setprecision(1) << fixed;
    cout << "The average = " <<avg;
    //Exit stage right or left!
    return 0;
}