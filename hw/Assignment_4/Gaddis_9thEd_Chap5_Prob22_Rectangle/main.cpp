/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/20/23
 * Purpose: Rectangle
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
    int size;
    char integer;
    //Declare Variables
    cin >> size;
    cin >> integer;
    
    while (size > 15 || size <= 0){
        cout<<"Input a number less than 15 or greater than 0,"<<endl;
        cin>>size>>integer;
    }
    //Map inputs -> outputs
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << integer;
        }
        if (i<size-1){
        cout<<endl;{
            
        }
    }
    
   
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
