/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/18/23
 * Purpose:  Compatible Signs
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
    string sign1,sign2, type1,type2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Horoscope Program which examines compatible signs."<<endl;
    cout << "Input 2 signs."<<endl;
    cin >> sign1;
    cin >> sign2;
    
    
    if ((sign1 == "Taurus"|| sign1 == "Capricorn"|| sign1 == "Virgo" )&&( sign2 == "Virgo"|| sign2 == "Capricorn"|| sign2 == "Taurus"))
    {
        cout <<sign1<< " and "<<sign2<< " are compatible Earth signs.";
    }
    
    else if((sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") && (sign2 == "Sagittarius" || sign2 == "Leo" || sign2 == "Aries"))
    {
        cout <<sign1 << " and "<<sign2<< " are compatible Fire signs.";
    }
  
    
    else if((sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") && (sign2 == "Aquarius" || sign2 == "Libra" || sign1 == "Gemini"))
    {
        cout <<sign1 << " and "<<sign2<< " are compatible Air signs.";
    }
    
    
    else if((sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") && (sign2 == "Pisces" || sign2 == "Scorpio" || sign2 == "Cancer" ))
    {
        cout <<sign1 << " and "<<sign2<< " are compatible Water signs.";
    }
    else
    {
         cout <<sign1<<" and "<<sign2<< " are not compatible signs.";
    }
    
    //Exit stage right or left!
    return 0;
}