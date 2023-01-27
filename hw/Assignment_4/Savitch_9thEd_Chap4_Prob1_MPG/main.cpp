/* 
 * File:   
 * Author: 
 * Created on 
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
float const liters = 0.264172;
float mpg(int miles, int liters);
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
        char answer;
        int miles = 0; 
        int gas = 0;
        float mpg;
         
        do 
        { 
        
        cout << "Enter number of liters of gasoline:"<<endl;
        cin >> gas;
        cout <<endl;
        
        cout <<"Enter number of miles traveled:"<<endl;
        cin >> miles;
        cout <<endl;
        
        mpg = miles / (gas * liters);
        
        cout<<"miles per gallon:"<<endl;
        cout <<fixed << setprecision(2)<<mpg<<endl;
        
        
        
        cout<<"Again:";
        cout<<endl;
        cin >> answer;
        if (answer=='y'||answer=='Y')
        cout<<endl;
        
        
        }
        
        while (answer == 'y' || answer == 'Y') ;
        
            
        return 0;
        
}