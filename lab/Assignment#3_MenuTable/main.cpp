/* 
 * File:   main.cpp
 * Author: dana k
 * Created on 1/22/23
 * Purpose:  Menu 
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"1 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"2 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"3 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"4 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"5 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"6 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"7 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"8 To run Problem Savtich/Gaddis XXXX"<<endl;
    cout<<"9 To run Problem Savtich/Gaddis XXXX"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':cout<<"You are in Problem 0"<<endl; break;
                 string a = "";
   string b = "";
   string c = "";
   
    cout << "Sorting Names"<<endl;
    cout << "Input 3 names"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
    /* a b c 
    *  a c b
    *  b a c
    *  b c a
    *  c a b
    *  c b a
    */
    
    if (a < b && b < c) /// abc
    {
        cout <<a<<endl<<b<<endl<<c;
    }
    else if (a < c && c < b) //acb
    { 
        cout <<a<<endl<<c<<endl<<b;
    }
    else if (b < a && a < c) //bac
    { 
        cout <<b<<endl<<a<<endl<<c;
    }
    else if (b < c && c < a ) //bca
    { 
        cout <<b<<endl<<c<<endl<<a;
    }
    else if (c < a && a < b) //cab
    { 
        cout <<c<<endl<<a<<endl<<b;
    }
    else // cba
    {
        cout <<c<<endl<<b<<endl<<a;
    }
    
        case '1':cout<<"You are in Problem 0"<<endl; break;
        case '2':cout<<"You are in Problem 0"<<endl; break;
        case '3':cout<<"You are in Problem 0"<<endl; break;
        case '4':cout<<"You are in Problem 0"<<endl; break;
        case '5':cout<<"You are in Problem 0"<<endl; break;
        case '6':cout<<"You are in Problem 0"<<endl; break;
        case '7':cout<<"You are in Problem 0"<<endl; break;
        case '8':cout<<"You are in Problem 0"<<endl; break;
        case '9':cout<<"You are in Problem 0"<<endl; break;
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}