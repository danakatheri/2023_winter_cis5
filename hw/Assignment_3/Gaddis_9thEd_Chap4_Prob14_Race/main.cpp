/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/17/23 8:04pm
 * Purpose: Runners
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> 
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
    string runner1, runner2, runner3;
    float time1,time2,time3;
    //Initialize or input i.e. set variable values
    //Map inputs -> outputs
    
    cout<<"Race Ranking Program"<<endl;
    cout<< "Input 3 Runners"<<endl;
    cout<< "Their names, then their times"<<endl;
    cin>>runner1;
    cin>>time1;
    cin>>runner2;
    cin>>time2;
    cin>>runner3;
    cin>>time3;
 
    
    if (time1 > 0 && time2 > 0 && time3 > 0)
    {
        if (time1 < time2 && time1 < time3){
    
                if (time2 < time3)
                {                  // 1 2 3 
                    cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                    cout << runner3 <<"\t"<< setw(3)<< time3;
                }
                else
                {                               // 1 3 2
                    cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2; 
                }
        }
        else if ( time2 < time1 && time2 < time3){
                if (time1 < time3){                 // 2 1 3
                     cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                     cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                     cout << runner3 <<"\t"<< setw(3)<< time3;
                 }
                else{                                // 2 3 1
                    cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner1 <<"\t"<< setw(3)<< time1;
                 }
        }
            
        else{
                if (time1 < time2){                   //3 1 2
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2;
                }                  
                else{                               // 3 2 1 
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                    cout << runner1 <<"\t"<< setw(3)<< time1;
                }
        } 
    } else {
        cout << "Error";
    }
    

    
    //Display the outputs
  
    //Exit stage right or left!
    return 0;
}