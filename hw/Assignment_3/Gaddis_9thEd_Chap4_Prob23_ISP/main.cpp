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
    char package;
    int hours = 0;
    int total = 0;
    float cost = 0;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "ISP Bill"<<endl;
    cout << "Input Package and Hours"<<endl;
    cin >> package;
    cin >> hours;
    
    if (package != 'A' && package != 'B' && package !='C' || hours > 744){
        
    } else{
        if (package == 'A'){
            if(hours>10){
                total = hours-10;
            }
            cost = 9.95 + total*2;
        }
    }
    if (package == 'B'){
        if(hours>20){
            total = hours-20;
        }
        cost = 14.95 + total*1;
    }
    if (package == 'C'){
        cost = 19.95;
    }
    else{
    }
    //Display the outputs
    cout << "Bill = $ " <<cost;
    //Exit stage right or left!
    return 0;
}