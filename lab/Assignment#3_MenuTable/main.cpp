/* 
 * File:   main.cpp
 * Author: dana k
 * Created on 1/22/23
 * Purpose:  Menu Table Assignment #3
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstring>
#include <iomanip>
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
    cout<<"0 To run Problem Gaddis Sort Names"<<endl;
    cout<<"1 To run Problem Gaddis Books"<<endl;
    cout<<"2 To run Problem Gaddis Bank Charges"<<endl;
    cout<<"3 To run Problem Gaddis Race"<<endl;
    cout<<"4 To run Problem Gaddis ISP"<<endl;
    cout<<"5 To run Problem Savtich Rock Paper Scissors"<<endl;
    cout<<"6 To run Problem Savtich Roman Conversion"<<endl;
    cout<<"7 To run Problem Savtich Compatible Signs"<<endl;
   
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{cout<<"You are in Problem Gaddis Sort Names"<<endl;
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
             break;
        }
        case '1':{ cout<<"You are in Problem Gaddis Books"<<endl;
        
    int buybook = 0;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Book Worm Points"<<endl;
    cout << "Input the number of books purchased this month."<<endl;
    cin >> buybook;
    
    cout << "Books purchased ="<<fixed << setw(3)<< buybook<<endl;
      
    if (buybook == 0)
         cout << "Points earned   = 0";
        
    else if (buybook == 1)
        cout << "Points earned   = 5";
        
    else if (buybook == 2)
        cout << "Points earned   = 15";
        
    else if (buybook == 3)
        cout << "Points earned   = 30";
    else if (buybook >= 4)
        cout << "Points earned   = 60";
    else 
    { 
    }
        }
        break;
    
        
        case '2':{
            cout<<"You are in Problem Gaddis Bank Charges"<<endl; 
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
        }
            break;
        
        case '3':{
            cout<<"You are in Problem Gaddis Race"<<endl;
            string runner1, runner2, runner3;
    float time1,time2,time3;
    //Initialize or input i.e. set variable values
    //Map inputs -> outputs
    
    cout<<"Race Ranking Program"<<endl;
    cout<< "Input 3 Runners"<<endl;
    cout<< "Their names, then their times"<<endl;
    cin>>runner1;
    cin>>time1;
    cin>>runner2;
    cin>>time2;
    cin>>runner3;
    cin>>time3;
 
    
    if (time1 > 0 && time2 > 0 && time3 > 0)
    {
        if (time1 < time2 && time1 < time3){
    
                if (time2 < time3)
                {                  // 1 2 3 
                    cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                    cout << runner3 <<"\t"<< setw(3)<< time3;
                }
                else
                {                               // 1 3 2
                    cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2; 
                }
        }
        else if ( time2 < time1 && time2 < time3){
                if (time1 < time3){                 // 2 1 3
                     cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                     cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                     cout << runner3 <<"\t"<< setw(3)<< time3;
                 }
                else{                                // 2 3 1
                    cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner1 <<"\t"<< setw(3)<< time1;
                 }
        }
            
        else{
                if (time1 < time2){                   //3 1 2
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner1 <<"\t"<< setw(3)<< time1 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2;
                }                  
                else{                               // 3 2 1 
                    cout << runner3 <<"\t"<< setw(3)<< time3 <<endl;
                    cout << runner2 <<"\t"<< setw(3)<< time2 <<endl;
                    cout << runner1 <<"\t"<< setw(3)<< time1;
                }
        } 
    } else {
        cout << "Error";
    }
    
        }
            break;
        
        case '4':{
            cout<<"You are in Problem Gaddis ISP"<<endl; 
             char package;
    int hours = 0;
    int total = 0;
    float cost = 0;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "ISP Bill"<<endl;
    cout << "Input Package and Hours"<<endl;
    cin >> package;
    cin >> hours;
    
    if (package != 'A' && package != 'B' && package !='C' || hours > 744){
        
    } else{
        if (package == 'A'){
            if(hours>10){
                total = hours-10;
            }
            cost = 9.95 + total*2;
        }
    }
    if (package == 'B'){
        if(hours>20){
            total = hours-20;
        }
        cost = 14.95 + total*1;
    }
    if (package == 'C'){
        cost = 19.95;
    }
    else{
    }
    //Display the outputs
    cout << "Bill = $ " <<cost;
        }
            break;
        
        case '5':{
            cout<<"You are in Problem Savtich Rock Paper Scissors"<<endl; 
            char p1;
    char p2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Rock Paper Scissors Game"<<endl;
    cout << "Input Player 1 and Player 2 Choices"<<endl;
    cin >> p1;
    cin >> p2;
    
    if (p1 == p2)
        cout << "Nobody wins.";
    if((p1 == 'P' && p2 == 'p' ) || (p1 == 'p' && p2 == 'P') ) 
        cout << "Nobody wins.";
    if ((p1 == 'S' && p2 == 's') || (p1 == 's' && p2 == 'S') ) 
        cout << "Nobody wins.";
    if ((p1 == 'R' && p2 == 'r') || (p1 == 'r' && p2 == 'R') ) 
        cout << "Nobody wins.";
    
    if ((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r')) 
        cout << "Paper covers rock.";
    if ((p1 == 'R' || p1 == 'r') && (p2 == 'p' || p2 == 'P') )
        cout << "Paper covers rock.";
        
    if ((p1 == 'P' || p1 == 'p' ) &&  (p2 == 'S' ||p2 == 's') )
        cout << "Scissors cuts paper.";
    if ((p1 == 'S' || p1 == 's') &&  (p2 == 'P' || p2 == 'p' ) )
        cout << "Scissors cuts paper.";
    
    if ((p1 == 'R' || p1 == 'r') &&  (p2 == 'S' || p2 == 's') )
        cout << "Rock breaks scissors.";
    if ((p1 == 'S' || p1 == 's') &&  (p2== 'R' || p2 == 'r') )
        cout << "Rock breaks scissors.";
        }
        break;
        
        case '6':{
            cout<<"You are in Problem Savtich Roman Conversion"<<endl; 
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
        }
        break;
        
        case '7':{
                cout<<"You are in Problem Savtich Compatible Signs"<<endl;
        string sign1,sign2, type1,type2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Horoscope Program which examines compatible signs."<<endl;
    cout << "Input 2 signs."<<endl;
    cin >> sign1;
    cin >> sign2;
    
    
    if ((sign1 == "Taurus"|| sign1 == "Capricorn"|| sign1 == "Virgo" )&&( sign2 == "Virgo"|| sign2 == "Capricorn"|| sign2 == "Taurus"))
    {
        cout <<sign1<< " and "<<sign2<< " are compatible Earth signs.";
    }
    
    else if((sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") && (sign2 == "Sagittarius" || sign2 == "Leo" || sign2 == "Aries"))
    {
        cout <<sign1 << " and "<<sign2<< " are compatible Fire signs.";
    }
  
    
    else if((sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") && (sign2 == "Aquarius" || sign2 == "Libra" || sign1 == "Gemini"))
    {
        cout <<sign1 << " and "<<sign2<< " are compatible Air signs.";
    }
    
    
    else if((sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") && (sign2 == "Pisces" || sign2 == "Scorpio" || sign2 == "Cancer" ))
    {
        cout <<sign1 << " and "<<sign2<< " are compatible Water signs.";
    }
    else
    {
         cout <<sign1<<" and "<<sign2<< " are not compatible signs.";
    }
    
        }
        break;
        
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}