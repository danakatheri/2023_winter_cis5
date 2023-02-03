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
bool isPrime(int n){   //Determine if the input number is prime.
    int i;
        for(i=2; i < n/2; i++)
		    if ( n% i == 0)
			    return false;

	return true;
}
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin >> number;
    if (isPrime(number) == true)
        cout<< number<< " is prime.";
    if (isPrime(number) == false)
        cout<< number<< " is not prime.";
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}