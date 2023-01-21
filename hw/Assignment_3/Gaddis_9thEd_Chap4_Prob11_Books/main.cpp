/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/16/23 12:39pm
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   
    int buybook = 0;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Book Worm Points"<<endl;
    cout << "Input the number of books purchased this month."<<endl;
    cin >> buybook;
    
    cout << "Books purchased ="<<fixed << setw(3)<< buybook<<endl;
      
    if (buybook == 0)
         cout << "Points earned   = 0";
        
    else if (buybook == 1)
        cout << "Points earned   = 5";
        
    else if (buybook == 2)
        cout << "Points earned   = 15";
        
    else if (buybook == 3)
        cout << "Points earned   = 30";
    else if (buybook >= 4)
        cout << "Points earned   = 60";
    else 
    { 
    } 
    
 

   
    //Exit stage right or left!
    return 0;
}
