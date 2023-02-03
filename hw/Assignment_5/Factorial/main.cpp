/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int n);//Function to write for this problem
    
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
        int number, result;
            
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin >> number;
    result = fctrl(number);
    cout<<number<<"! = "<<result;
    //Output data
    
    //Exit stage right!
    return 0;
}
int fctrl(int n){
        int result = 1;
        for (int i =2; i <= n; i++)
            result *=i;
        return result;
}