/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
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
   
    int integer = 0;
    int remain = 0;
    string roman; // roman number
   
    roman = "";
    
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<< "Input the integer to convert."<<endl;
    cin>> integer;
    int copyInt = integer;
    
    if ((integer >= 3000) || (integer <=1000)){
        cout<< integer << " is Out of Range!";
    }
    else {
        if (integer >= 1000){
            remain = (integer / 1000);
            
            for (int i=0; i < remain; i++){
                roman += 'M';
            }
            integer %= 1000;
        }
        if (integer >=100){
            remain = (integer/100);
            if (remain == 9){
                roman += "CM";
            }
            else if (remain >= 5){
                roman += 'D';
                
                for (int i = 0; i < remain -5; i++){
                    roman += 'C';
                }
            }
            else if (remain == 4){
                roman += "CD";
            }
            else if(remain >= 1){
                for (int i=0; i < remain; i++){
                    roman += 'C';
                }
            }
            integer %= 100;
        }
         if (integer >= 10){
             remain = integer /10;
             
             if (remain ==9){
                 roman += "XC";
             }
             else if (remain >=5){
                 roman += 'L';
                 
                 for (int i=0; i < remain -5; i++){
                     roman += 'X';
                 }
             }
             else if (remain ==4) {
                 roman += "XL";
             }
             else if (remain >=1){
                 for (int i=0; i < remain; i++) {
                     roman += 'X';
                 }
             }
             integer %= 10;
         }
         if (integer >=1){
             remain = integer;
             
             if (remain == 9){
                 roman += "IX";
             }
             else if (remain >=5) {
                 roman += "V";
                 
                 for (int i=0; i < remain -5; i++){
                     roman += 'I';
                 }
            }
            else if (remain == 4) {
                roman += "IV";
            }
            else if(remain >=1){
                for (int i=0;i <remain;i++){
                    roman += 'I';
                }
            }
         }
         cout << copyInt << " is equal to " <<roman;
    }
    
    return 0;
}