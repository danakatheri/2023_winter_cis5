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

int main(int argc, char** argv) {

float balance; // account balance
float fee; // fee for writing checks
float newbal; // new balance
int charges = 10; // fee bank charges 
int extra = 0; // fee if balance is below
int checks; // number of checks
float monthly; // check fee x number of checks used



cout << "Monthly Bank Fees"<<endl;
cout << "Input Current Bank Balance and Number of Checks"<<endl;
cin >> balance;
cin >> checks;

    if (balance <0){
        cout << "This account is overdrawn."<<endl; 
    }
    if (checks <0){
        cout << "Enter valid check number."<<endl; 
    }
    if (checks >= 0 && checks <= 19){
        fee = .10;
    }
    if (checks >= 20 && checks <= 39){
        fee = .08;
    }
    if (checks >= 40 && checks <= 59){
        fee = .06;
    }
    if (checks >= 60){
        fee = .04; 
    }
    
monthly = checks * fee;
newbal = balance - (monthly + charges);

    if (balance < 400){
        extra = 15;
        newbal = balance - ( monthly + charges + extra);
    }
   

cout <<"Balance     $"<<setw(9)<<fixed<<setprecision(2)<<balance<<endl;
cout <<"Check Fee   $"<<setw(9)<<fixed<<setprecision(2)<<monthly<< endl;
cout <<"Monthly Fee $"<<setw(9)<<fixed<<setprecision(2)<<static_cast<float>(charges)<<endl;
cout <<"Low Balance $"<<setw(9)<<fixed<<setprecision(2)<<static_cast<float>(extra)<<endl;
cout <<"New Balance $"<<setw(9)<<fixed<<setprecision(2)<<newbal;
    //Exit stage right or left!
    return 0;
}