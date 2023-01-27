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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float a = 0;
    float b = 0;
    float c = 0;
    float max1;
    float max2;
    cout << "Enter first number:"<<endl;
    cin >> a;
    cout<<endl;
    
    cout << "Enter Second number:"<<endl;
    cin >> b;
    cout<<endl;
    
    cout << "Enter third number:"<<endl;
    cin >> c;
    cout<<endl;
      
        if (a>b){
            max1 = a;
        }
        else{
            max1 = b;
        }
        
        
        if (a > b && a > c){
            max2 = a;
        }
        else if (  b > a && b > c) {
            max2 = b;
        }
        else if ( c > a && c > b) {
            max2 = c;
        }
        else{
            cout << "Error";
            
        }
    
    cout <<"Largest number from two parameter function:"<<endl;
    cout << max1;
    cout<<endl;
    cout<<endl;
    
    cout<<"Largest number from three parameter function:"<<endl;
    cout << max2<<endl;
    
    //Exit stage right or left!
    return 0;
}