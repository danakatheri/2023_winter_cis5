/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/19/23 2:56am
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std;

int main(int argc, char** argv) {
    //Set the random number seed
    int input;
    int sum = 0;
    //Declare Variables
    cin >> input;
    //Initialize or input i.e. set variable values
    for (int i = 1; i <= input; i++)
    {
        sum += i;
    }
    //Map inputs -> outputs
   cout << "Sum = "<<sum;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
