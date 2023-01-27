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
int main(int argc, char** argv) {
//Function Prototypes
    int pattern;
    
    cin >> pattern; 
    for(int i = 1; i <= pattern; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "+";
        }
    if (i<= pattern){
        cout << "\n";
    }
    if (i<= pattern){
        cout << "\n";
    }
    }
    
    for(int i = pattern; i >= 1; --i) {
        if (i< pattern){
        cout << "\n";
    }
        if (i< pattern){
        cout << "\n";
    }
        for(int j = 1; j <= i; ++j) {
            cout << "+";
        }
        
        }
    
//Execution Begins Here!

    //Set the random number seed
 return 0;  
}
