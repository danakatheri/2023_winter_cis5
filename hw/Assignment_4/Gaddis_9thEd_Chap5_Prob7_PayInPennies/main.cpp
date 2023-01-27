/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
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
   int days;
   int last = 0;
   int pay;
   int payday = 1 ;
   last = payday;
   
   
    cin >> days;
    //Initialize or input i.e. set variable values
    while (days < 1)
    {
        cout << "Error"<<endl;
        cin >> days;
    }
    for (int i=2; i<= days; i++)
    {
        (payday *= 2);
        last += payday ;
    
    }
    //Map inputs -> outputs
    cout << setprecision(2) << fixed << showpoint;
    cout << "Pay = $"<<last * 0.01;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
