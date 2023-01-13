/* 
 * File:
 * Author: Dana Rodriguez
 * Date: Jan 12. 2023 2:36pm
 * Purpose: A2 More Test Output Format
 * Version:
 */

//System Libraries - Post Here
#include <iostream> 
#include <iomanip>

using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
   
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    //Declare variables or constants here
    //7 characters or less
   
    //Initialize or input data here
    
    //Display initial conditions, headings here
    cout<<setw(9)<<a<<fixed<<showpoint<<setprecision(1)<<setw(8)<<a<<setprecision(2)<<setw(7)<< a <<endl;
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<b<<fixed<<showpoint<<setprecision(1)<<setw(8)<<b<<setprecision(2)<<setw(7)<< b <<endl;
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<c<<fixed<<showpoint<<setprecision(1)<<setw(8)<<c<<setprecision(2)<<setw(7)<< c <<endl;
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<d<<fixed<<showpoint<<setprecision(1)<<setw(8)<<d<<setprecision(2)<<setw(7)<< d;
    

    //Process inputs  - map to outputs here
  
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}