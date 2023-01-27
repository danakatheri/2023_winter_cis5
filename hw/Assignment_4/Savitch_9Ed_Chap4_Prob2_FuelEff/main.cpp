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
float const liters = 0.264179f;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
        char answer = 'y';
        int miles1 = 0; // number of miles traveled car 1
        int miles2 = 0; // number of miles traveled car 1
        int gas1 = 0;  // number of liters of gasoline car 1
        int gas2 = 0;  // number of liters of gasoline car 2
        float mpg1;
        float mpg2;
        
        do
        { 
        cout << "Car 1"<<endl;
        cout << "Enter number of liters of gasoline:"<<endl;
        cin >> gas1;
        
        
        cout <<"Enter number of miles traveled:"<<endl;
        cin >> miles1;
        
        mpg1 = miles1 / (gas1 * liters);
        
        cout<<"miles per gallon: "<<fixed << setprecision(2)<<mpg1<<endl;
        cout<<endl;
        
        cout << "Car 2"<<endl;
        cout << "Enter number of liters of gasoline:"<<endl;
        cin >> gas2;
        
        cout <<"Enter number of miles traveled:"<<endl;
        cin >> miles2;
        
        mpg2 = miles2 / (gas2 * liters);
        
        cout<<"miles per gallon: "<<fixed << setprecision(2)<<mpg2<<endl;
        cout<<endl;
        
            if (mpg1 >= mpg2){
                cout << "Car 1 is more fuel efficient"<<endl;
            }
            else 
            {
                cout << "Car 2 is more fuel efficient"<<endl;
            }
            cout<<endl;
            cout<<"Again:"<<endl;
            cin >> answer;
            if(answer == 'Y' || answer == 'y'){
                cout<<endl;
            }
        } while  (answer == 'Y' || answer == 'y');
                
        return 0;
        
}

