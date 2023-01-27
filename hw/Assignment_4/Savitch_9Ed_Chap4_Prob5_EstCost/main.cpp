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
    //Set the random number seed
    float oldp1;
    float newp1;
    float rate1;
    float oldp2;
    float newp2;
    float rate2;
    
    float tax1;
    float tax2;
    
    float price1;
    float price2;
    
    char answer;
    
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    start2:
    cout << "Enter current price:"<<endl;       
    cin >> newp1;
    
    cout << "Enter year-ago price:"<<endl;      
    cin >>oldp1;
    
    rate1 = ((newp1 - oldp1)/oldp1)*100;      
    
    cout << "Inflation rate: "<<fixed<<setprecision(2)<<setw(4)<<rate1<<'%'<<endl;
    
    cout << endl;
    
    
    tax1 = (newp1 * rate1)/100;
    price1 = newp1 + tax1;
    
    
    rate2 = ((price1 - newp1)/newp1)*100;   
    
    tax2 = (price1 * rate2)/100;
    price2 = price1 + tax2;
    
    
    
    cout <<"Price in one year: $"<<price1<<endl;
    cout <<"Price in two year: $"<<price2<<endl;
    cout<<endl;
    cout << "Again:"<<endl;
    
    
   
    cin >> answer;
    if (answer == 'y' || answer == 'Y'){
        cout<<endl;
        goto start2;
    }
    else {
        
        return 0;
    }
    
    
}