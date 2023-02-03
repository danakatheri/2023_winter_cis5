/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/27
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int factor(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}



void problem1(){
        unsigned short x;
        char shape;

cout<<"Create a numbered shape that can be sized."<<endl;
cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
cin>>x>>shape;

if (shape == 'x' && x%2 == 0){  //cross even
    int count = 1;
        for (int i = x; i >= 1; i--){
            for (int j = 1; j<= x; j++){
                if(i == j){
                    cout<<j;
                }
                else if(count == j){
                    cout<<j;
                }
                else {
                    cout<< " ";
                }
            }
            cout << endl;
            count++;
        }
    }
if (shape == 'x' && x%2 == 1){  //cross odd
    int count = x;
        for (int i = 1; i <= x; i++){
            for (int j = x; j >= 1; j--){
                if(i == j){
                    cout<<j;
                }
                else if(count == j){
                    cout<<j;
                }
                else {
                    cout<< " ";
                }
            }
            cout << endl;
            count--;
        }
    }
if (shape == 'b' && x%2 == 0){ // backward slash even
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= x; j++){
            if (i == j){
                cout << j;
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}
if (shape == 'b' && x%2 == 1){ // backward slash odd
    for (int i = x; i >= 1; i--){
        for (int j = x; j >= 1; j--){
            if (i == j){
                cout << j;
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}
if (shape == 'f' && x%2 == 0){
    for (int i =x; i >=1; i--){
        for (int j = 1; j <= x; j++){
            if (i == j){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
if (shape == 'f' && x%2 == 1){
    for (int i = 1; i <=1; i++){
        for (int j = x; j >= 1; j--){
            if (i == j){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
}

void problem2(){
    char numbers[4];
    string answer[4];
    string part1, part2;
    string space= " ";
    
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> numbers;
 
    for (int i=0; i < 4; i++) {
        part1 = numbers[i];
        int ascii_value = numbers[i];
        int number = numbers[i] - '0';
        if (ascii_value >= 48 && ascii_value <= 57) {
            for (int j = number-1 ; j>=0; j--) {
            part2 += "*";    
            }
            answer[i] = part1+ space + part2;
            part2 = "";
        }
        else {
        part2 = "?";
        answer[i] = part1+ space + part2;
        part2 = "";
        }
    }
    
    cout<<answer[3]<<endl;
    cout<<answer[2]<<endl;
    cout<<answer[1]<<endl;
    cout<<answer[0]<<endl;
    cout<<endl;
    
}
    
void problem3(){
    int letters, n1000s,n100s,n10s,n1s;
    string english;
    //Input or initialize values Here
    
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>letters;
    
   
    
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=letters/1000;  //Determine # 1000'S
    letters-=n1000s*1000; //Subtract from the Original letters
    n100s=letters/100;    //Repeat process for all digits
    letters-=n100s*100;
    n10s=letters/10;    //Repeat process for all digits
    letters-=n10s*10;
    n1s=letters;;
    
     
    
     english+=n1000s==3?"Three Thousand ":
                n1000s==2?"Two Thousand ":
                n1000s==1?"One Thousand ":"";
    
    
    switch(n100s){
        case 9:english+="Nine Hundred ";break;
        case 8:english+="Eight Hundred ";break;
        case 7:english+="Seven Hundred ";break;
        case 6:english+="Six Hundred ";break;
        case 5:english+="Five Hundred ";break;
        case 4:english+="Four Hundred ";break;
        case 3:english+="Three Hundred ";break;
        case 2:english+="Two Hundred ";break;
        case 1:english+="One Hundred ";
    }
        if(n10s==9)english+="Ninety ";
        if(n10s==8)english+="Eighty ";
        if(n10s==7)english+="Seventy ";
        if(n10s==6)english+="Sixty ";
        if(n10s==5)english+="Fifty ";
        if(n10s==4)english+="Fourty ";
        if(n10s==3)english+="Thirty ";
        if(n10s==2)english+="Twenty ";
        if(n10s==1&&n1s<0)english+="Ten";
    
        if(n1s==9&&(n10s==1))english+="Nineteen";
        if(n1s==8&&(n10s==1))english+="Eighteen";
        if(n1s==7&&(n10s==1))english+="Seventeen";
        if(n1s==6&&(n10s==1))english+="Sixteen";
        if(n1s==5&&(n10s==1))english+="Fifteen";
        if(n1s==4&&(n10s==1))english+="Fourteen";
        if(n1s==3&&(n10s==1))english+="Thirteen";
        if(n1s==2&&(n10s==1))english+="Twelve";
        if(n1s==1&&(n10s==1))english+="Eleven";
    
        if(n1s==9&&!(n10s==1))english+="Nine";
        if(n1s==8&&!(n10s==1))english+="Eight";
        if(n1s==7&&!(n10s==1))english+="Seven";
        if(n1s==6&&!(n10s==1))english+="Six";
        if(n1s==5&&!(n10s==1))english+="Five";
        if(n1s==4&&!(n10s==1))english+="Four";
        if(n1s==3&&!(n10s==1))english+="Three";
        if(n1s==2&&!(n10s==1))english+="Two";
        if(n1s==1&&!(n10s==1))english+="One";
            
            cout<<english;
            cout<<" and no/100's Dollars"<<endl;
    
}

void problem4(){
    char package;
    unsigned short hours;
    float costA;
    float costB;
    float costC;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package;
    cin>>hours;
    //Basic Charges
    
    if (hours <= 10){
        costA = 16.99;
    }
    if (hours <= 20 && hours>10){
        costA = ((hours-10)*.95) + 16.99;
    }
    if (hours>20){
        costA =((hours-20)*.85) + 16.99 + 9.5;
    }
    
    if (hours <= 20)
        costB = 26.99;
        
    if (hours<30 && hours>20){
        costB = ((hours-20)*0.74) + 26.99;
        }
    if (hours>30){
        costB = ((hours-30)*.64) + 26.99 + 7.4;
        }
        costC = 36.99 ;
     
    //Output the Charge
if (package=='A'|| package =='a'){
        cout<<"$"<<fixed<<setprecision(2)<<showpoint<<costA;
    if (costA<costB&&costA<costC){
       cout<<" A $0.00"<<endl;
    }
    if (costB<costA&&costB<costC){
      cout<<" B $"<<fixed<<setprecision(2)<<showpoint<<costA-costB<<endl;
    }
    if (costC<costA&&costC<costB){
        cout<<" C $"<<fixed<<setprecision(2)<<showpoint<<costA-costC<<endl;
   }
}

if (package =='B'|| package =='b'){
        cout<<"$"<<fixed<<setprecision(2)<<showpoint<<costB;
    if (costB<costA&&costB<costC){
       cout<<" B $0.00"<<endl;
    }
    if (costA<costB&&costA<costC){
      cout<<" A $"<<fixed<<setprecision(2)<<showpoint<<costB-costA<<endl;
    }
    if (costC<costA&&costC<costB){
        cout<<" C $"<<fixed<<setprecision(2)<<showpoint<<costB-costC<<endl;
    }
}

if(package =='C'|| package =='c'){
      cout<<"$"<<fixed<<setprecision(2)<<showpoint<<costC;
    if (costC<costA&&costC<costB){ 
       cout<<" C $0.00"<<endl;
    }
    if (costA<costB&&costA<costC){ 
      cout<<" A $"<<fixed<<setprecision(2)<<showpoint<<costB-costA<<endl;
    }
    if (costB<costA&&costB<costC){
        cout<<" B $"<<fixed<<setprecision(2)<<showpoint<<costC-costB<<endl;
    }
}
}

void problem5(){
     float payRate;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    float grossp;
    
    //Calculate Paycheck
    if  (hrsWrkd<=40 && hrsWrkd>20){
        grossp =1.5 * payRate * (hrsWrkd - 20);
        grossp+=payRate*20;
    }
    else if (hrsWrkd> 40){
        grossp =2.0 * payRate * (hrsWrkd - 40);
        grossp+=payRate*20*1.5;
        grossp+=payRate*20;
    }
    else {
        grossp = payRate * hrsWrkd;
    }
        
    //Output the check
    cout <<"$"<<fixed<< setprecision(2)<<setw(6)<<grossp<<endl;
    
}

void problem6(){
       float x,fx,term, j;
    int nterms;
    char y;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    j = 0;
    if ( nterms == 1 ){
        fx = x;
    }
    else if ( nterms >= 2 ){
        fx = x ;
        j = 1 ;
        y = 't' ;
        
        for ( int i = 0 ; i < nterms - 1 ; i++ ){
            j += 2;
            if ( y == 't' ){
                fx -= (pow (x , j ) / factor( j ));
                y = 'f' ;
            }
            else if ( y == 'f' ){
                fx += (pow ( x, j ) / factor( j ));
                y = 't';
            }
        }
    }
    //Output the result here
    
    cout<<fixed<<setprecision(6)<<setw(8)<<fx<<endl;
    //Exit
    
}

int factor(int n){
    //Declare and Initialize Product
    int prod=1;
    //Process/Calculations Here
    for (int i = 1 ; i <= n ; i++ ){
        prod *= i;
    }
    return prod;
}


1