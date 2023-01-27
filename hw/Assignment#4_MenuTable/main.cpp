/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
float const liters = 0.264179f;
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Gaddis Sum"<<endl;
    cout<<"1 To run Problem Gaddis Pay In Pennies"<<endl;
    cout<<"2 To run Problem Gaddis Min and Max"<<endl;
    cout<<"3 To run Problem Gaddis Rectangle"<<endl;
    cout<<"4 To run Problem Gaddis Pattern"<<endl;
    cout<<"5 To run Problem Savtich MPG "<<endl;
    cout<<"6 To run Problem Savtich Fuel Efficient"<<endl;
    cout<<"7 To run Problem Savtich Inflation"<<endl;
    cout<<"8 To run Problem Savtich Estimate Cost"<<endl;
    cout<<"9 To run Problem Savtich 2 or 3 Max"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
            cout<<"You are in Problem Gaddis Sum"<<endl; 
            int input;
    int sum = 0;
    //Declare Variables
    cin >> input;
    //Initialize or input i.e. set variable values
    for (int i = 1; i <= input; i++)
    {
        sum += i;
    }
    //Map inputs -> outputs
   cout << "Sum = "<<sum;
        }
            break;
            
        case '1':{
            cout<<"You are in Problem Gaddis Pay In Pennies"<<endl;
            int days;
   int last = 0;
   int pay;
   int payday = 1 ;
   last = payday;
   
   
    cin >> days;
    //Initialize or input i.e. set variable values
    while (days < 1)
    {
        cout << "Error"<<endl;
        cin >> days;
    }
    for (int i=2; i<= days; i++)
    {
        (payday *= 2);
        last += payday ;
    
    }
    //Map inputs -> outputs
    cout << setprecision(2) << fixed << showpoint;
    cout << "Pay = $"<<last * 0.01;
        }
        break;
        case '2':{
            cout<<"You are in Problem Gaddis Min and Max"<<endl;
             const int integer = -99;
    int number = 0;
    int min = 10000;
    int max = -10000;
        
    //Declare Variables
    //Initialize or input i.e. set variable values
    while ( number != integer)
    {
        cin >> number;
        if(number == integer){
            break;
        }
        if (number < min)
            min = number;
            
        if (number > max)
            max = number;
            
    }
    //Map inputs -> outputs
    cout <<"Smallest number in the series is "<< min <<endl;
    cout << "Largest  number in the series is "<< max;
        }
        break;
        case '3':{
            cout<<"You are in Problem Gaddis Rectangle"<<endl; 
             int size;
    char integer;
    //Declare Variables
    cin >> size;
    cin >> integer;
    
    while (size > 15 || size <= 0){
        cout<<"Input a number less than 15 or greater than 0,"<<endl;
        cin>>size>>integer;
    }
    //Map inputs -> outputs
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << integer;
        }
        if (i<size-1){
        cout<<endl;{
            
        }
    }
    
   
    }
        }
        break;
        case '4':{
            cout<<"You are in Problem Gaddis Pattern"<<endl;
             int pattern;
    
    cin >> pattern; 
    for(int i = 1; i <= pattern; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "+";
        }
    if (i<= pattern){
        cout << "\n";
    }
    if (i<= pattern){
        cout << "\n";
    }
    }
    
    for(int i = pattern; i >= 1; --i) {
        if (i< pattern){
        cout << "\n";
    }
        if (i< pattern){
        cout << "\n";
    }
        for(int j = 1; j <= i; ++j) {
            cout << "+";
        }
        
        }
        }
            break;
        case '5':{
            cout<<"You are in Problem Savtich MPG"<<endl;
            char answer;
        int miles = 0; 
        int gas = 0;
        float mpg;
         
        do
        { 
        
        cout << "Enter number of liters of gasoline:"<<endl;
        cin >> gas;
        cout <<endl;
        
        cout <<"Enter number of miles traveled:"<<endl;
        cin >> miles;
        cout <<endl;
        
        mpg = miles / (gas * liters);
        
        cout<<"miles per gallon:"<<endl;
        cout <<fixed << setprecision(2)<<mpg<<endl;
        
        
        
        cout<<"Again:"<<endl;
        
        cin >> answer;
        
        }
        
        while (answer == 'Y' || answer == 'y');
        }
        break;
        case '6':{
            cout<<"You are in Problem Savtich Fuel Efficient"<<endl;
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
        }
        break;
        case '7':{
            cout<<"You are in Problem Savtich Inflation"<<endl;
             //Set the random number seed
    float oldp;
    float newp;
    float rate;
    char answer;
    
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    start1:
    cout << "Enter current price:"<<endl;       
    cin >> newp;
    
    cout << "Enter year-ago price:"<<endl;      
    cin >>oldp;
    
    rate = ((newp - oldp)/oldp)*100;      
    
    cout << "Inflation rate: "<<fixed<<setprecision(2)<<setw(4)<<rate<<'%'<<endl;
    
    cout << endl;

    
    cout << "Again:"<<endl;
    cin >> answer;
    if (answer == 'y' || answer == 'Y'){
        cout <<endl;
        goto start1;
    }
    else {
        return 0;
    }
        }
            break;
            
        case '8':{
            cout<<"You are in Problem Savtich Estimate Cost"<<endl;
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
            break;
            
        case '9':{
            cout<<"You are in Problem Savtich 2 or 3 Max"<<endl;
            float a = 0;
    float b = 0;
    float c = 0;
    float max1;
    float max2;
    cout << "Enter first number:"<<endl;
    cin >> a;
    cout<<endl;
    
    cout << "Enter Second number:"<<endl;
    cin >> b;
    cout<<endl;
    
    cout << "Enter third number:"<<endl;
    cin >> c;
    cout<<endl;
      
        if (a>b){
            max1 = a;
        }
        else{
            max1 = b;
        }
        
        
        if (a > b && a > c){
            max2 = a;
        }
        else if (  b > a && b > c) {
            max2 = b;
        }
        else if ( c > a && c > b) {
            max2 = c;
        }
        else{
            cout << "Error";
            
        }
    
    cout <<"Largest number from two parameter function:"<<endl;
    cout << max1;
    cout<<endl;
    cout<<endl;
    
    cout<<"Largest number from three parameter function:"<<endl;
    cout << max2<<endl;
        }
        break;
    }
    
   
    return 0;
}
