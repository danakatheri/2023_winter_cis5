#include <iostream> //Input Output Library

using namespace std;

//User LIBRARIES
 
 //Global Constants not Variables

//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {

int num;                    //User input for integer loop 
    int min, max;               //For the minimum and maximum
    const int SentVal = -99;     // To end the loop
    //Initialize Variables
    cin>>num;
    min = max = num; 
    while(num != SentVal){
       if(num < min){
           min = num;
       }
       if(num > max){
           max = num;
       }
    cin>>num;
   }
    
    return 0;
}