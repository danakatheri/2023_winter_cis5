/* 
 * File:   
 * Author: Dana Rodriguez
 * Created on 
 * Purpose: 
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
    float oldp;
    float newp;
    float rate;
    char answer;
    
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    start1:
    cout << "Enter current price:"<<endl;       
    cin >> newp;
    
    cout << "Enter year-ago price:"<<endl;      
    cin >>oldp;
    
    rate = ((newp - oldp)/oldp)*100;      
    
    cout << "Inflation rate: "<<fixed<<setprecision(2)<<setw(4)<<rate<<'%'<<endl;
    
    cout << endl;

    
    cout << "Again:"<<endl;
    cin >> answer;
    if (answer == 'y' || answer == 'Y'){
        cout <<endl;
        goto start1;
    }
    else {
        return 0;
    }
    
    
}
   

