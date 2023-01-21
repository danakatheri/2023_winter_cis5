/* 
 * File:   main.cpp
 * Author:Dana Rodriguez
 * Created on 1/12/22 9:36pm
 * Purpose:  Counting Calories
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int bag = 40;
    const int serve = 10;
    const int calorie = 300;
    //Declare Variables
    float ckEat; //cookies eaten
    float srvEat; //servings eaten
    float calcm; //calories consumed
    
    float cksrv = bag / serve; // cookies per serving
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Calorie Counter" <<endl;
    cout << "How many cookies did you eat?"<<endl;
    cin >> ckEat;
    
    srvEat = ckEat / cksrv; // number of servings
    
    calcm = srvEat * calorie; // calories consumed
    
    cout << "You consumed " <<calcm<< " calories.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}