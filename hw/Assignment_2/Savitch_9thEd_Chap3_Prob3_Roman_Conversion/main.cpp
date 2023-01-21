/* 
 * File:   main.cpp
 * Author: Dana Rodriugez
 * Created on 1/18/23 1:50am
 * Purpose:  Roman Number
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    int integer;
    string roman;
    int thous;
    int hund ;
    int tens;
    int ones;
    roman = "";
    
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<< "Input the integer to convert."<<endl;
    cin>> integer;
    
    thous=integer/1000;  //Determine # 1000'S
    integer-=thous*1000; 
    hund=integer/100;    //Repeat process for all digits
    integer-=hund*100; 
    tens=integer/10;    //Repeat process for all digits
    integer-=tens*10; 
    ones=integer;
    
    if ((integer >= 3000) || (integer <=1000)){
        cout<< integer << " is Out of Range!";
    }
    else{
        if(thous==3)roman+="MMM";
        if(thous==2)roman+="MM";
        if(thous==1)roman+="M";
            
        if(hund==9)roman+="CM";
        if(hund==8)roman+="DCCC";
        if(hund==7)roman+="DCC";
        if(hund==6)roman+="DC";
        if(hund==5)roman+="D";
        if(hund==4)roman+="CD";
        if(hund==3)roman+="C";
        if(hund==2)roman+="C";
        if(hund==1)roman+="C";
            
        if(tens==9)roman+="XC";
        if(tens==8)roman+="LXXX";
        if(tens==7)roman+="LXX";
        if(tens==6)roman+="LX";
        if(tens==5)roman+="L";
        if(tens==4)roman+="XL";
        if(tens==3)roman+="XXX";
        if(tens==2)roman+="XX";
        if(tens==1)roman+="X";      
    
        if(ones==9)roman+="IX";
        if(ones==8)roman+="VIII";
        if(ones==7)roman+="VII";
        if(ones==6)roman+="VI";
        if(ones==5)roman+="V";
        if(ones==4)roman+="IV";
        if(ones==3)roman+="III";
        if(ones==2)roman+="II";
        if(ones==1)roman+="I";
    }
    
    cout << integer << " is equal to " << roman;
    
    return 0;
}