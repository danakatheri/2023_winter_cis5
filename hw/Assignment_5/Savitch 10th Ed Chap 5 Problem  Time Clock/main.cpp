/* 
 * File:   
 * Author: Dana Rodriguez
 * Created on 1/29/23
 * Purpose:  Time Clock Problem
 */

#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    int hour;
    int minutes, wait;
    char pick;
    string ampm;
    int hrs, mins;
    do{
        cin >> hour;
        cout<<"Enter hour:"<<endl;
        cout<< endl;
        cin >> minutes;
        cout<<"Enter minutes:"<<endl;
        cin >> ampm;
        cout<< endl;
        cout<<"Enter A for AM, P for PM:"<<endl;
        cin >> wait;
        cout<< endl;
        cout<<"Enter waiting time:"<<endl;
        cout<< endl;
        if (ampm == "A"){
            ampm = "AM";
        }
        else{
            ampm = "PM";
        }
        cout<<"Current time = "<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minutes<<" "<<ampm<<endl;
        
        minutes=(minutes+wait);
        hour = hour + (minutes/60);
        minutes=minutes % 60;
        if (hour > 12 && ampm == "PM"){
            ampm = "AM";
        }
        else if (hour > 12 && ampm == "AM"){
                ampm = "PM";
                hrs = hrs % 12;
               
        }
        if (hour > 12){
            hour = hour - 12;
        }
        cout<<"Time after waiting period = "<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minutes<< " "<<ampm<<endl;
        cout<<endl;
        cout <<"Again:"<<endl;
        cin >> pick;
        if(pick == 'Y' || pick == 'y'){
            cout<<endl;
        }
    }
    while (pick == 'Y' || pick == 'y');

    
    //Exit stage right or left!
    return 0;
}
