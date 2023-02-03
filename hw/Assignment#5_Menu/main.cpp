/* 
 * File:   main.cpp
 * Author: YOUR NAME GOES HERE
 * Created on DATE AND TIME HERE
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
void problem1(); void minmax(int,int,int,int&,int&);
void problem2(); int fctrl(int n);
void problem3(); bool isPrime(int n);
void problem4(); int collatz(int n);
void problem5();
void problem6();
void problem7();
void problem8();float psntVal(float,float,int);
void problem9();void score(int &,int &,int &,int &,int &);
                float average(int,int,int,int,int);
                int lowest(int,int,int,int,int);

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
            case 7:    problem7();break;
            case 8:    problem8();break;
            case 9:    problem9();break;
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
    cout<<"Type 7 to execute Problem 7"<<endl;
    cout<<"Type 8 to execute Problem 8"<<endl;
    cout<<"Type 9 to execute Problem 9"<<endl;
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
    int nums[3];
    int min, max;
    //Initialize Variables
    min = 0;
    max = 0;
    
    for(int i = 0; i < 3; i++)
        cin >> nums[i];
    
    //Process/Map inputs to outputs
    minmax(nums[0], nums[1], nums[2], min, max);
    cout << 
    "Input 3 numbers" << endl <<
    "Min = "  << min << endl << 
    "Max = "  << max;
    
  
}

void problem2(){
    int number, result;
            
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin >> number;
    result = fctrl(number);
    cout<<number<<"! = "<<result;
}

void problem3(){
     int number;
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin >> number;
    if (isPrime(number) == true)
        cout<< number<< " is prime.";
    if (isPrime(number) == false)
        cout<< number<< " is not prime.";
}

void problem4(){
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
}

void problem5(){
     int n,ns;
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    cout<<"1"<<endl;
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
}

void problem6(){
     
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

    
}

void problem7(){
    
}
void problem8(){
    float P, r, F;
    int n;
    
    cout<<"This is a Present Value Computation"<<endl;
   
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>F;
    cout<<"Input the Number of Years"<<endl;
    cin>>n;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>r;
    
    
    cout<< fixed << showpoint << setprecision(2);
    cout<<"The Present Value = $";
    cout << psntVal(F,r,n);
}
void problem9(){
     int t1,t2,t3,t4,t5;
    //Initialize Variables

    score (t1,t2,t3,t4,t5);
   
    //Map/Process the Inputs -> Outputs
 
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(1)<<setw(3)<<average(t1,t2,t3,t4,t5);
}


void minmax(int num1,int num2,int num3,int& min,int& max){
    for(int i = 0; i < 3; i ++){
        //FIND MAXIMUM VALUE
        if( num1 >= num2 && num1 >= num3 )
            max = num1;
        else if( num2 >= num1 && num2 >= num3 )
            max = num2;
        else if( num3 >= num1 && num3 >= num2 )
            max = num3;
        
        //FIND MINIMUM
        if( num1 <= num2 && num1 <= num3 )
            min = num1;
        else if( num2 <= num1 && num2 <= num3 )
            min = num2;
        else if( num3 <= num1 && num3 <= num2 )
            min = num3;
    }
}

int fctrl(int n){
        int result = 1;
        for (int i =2; i <= n; i++)
            result *=i;
        return result;
}

bool isPrime(int n){   //Determine if the input number is prime.
    int i;
        for(i=2; i < n/2; i++)
		    if ( n% i == 0)
			    return false;

	return true;
}

int collatz(int n){
    int i = 1;
        
    while (n != 1){
        if (n % 2 == 0){ // even
            n = n / 2;
        }
        else{
            n = n * 3 + 1; // odd
        }
        ++i;
    }
    return i;
}

float psntVal(float F,float r,int n){
    r *= 0.01;
    return F / pow((1 + r), n);
    
}

void score(int &t1, int &t2, int &t3, int &t4, int &t5){
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
        cin>>t1>>t2>>t3>>t4>>t5;
}
    float average (int t1,int t2,int t3,int t4,int t5){
        cout<<"The average test score = ";
        float avg=lowest(t1,t2,t3,t4,t5)/4;
        return avg;
}
    int lowest (int t1,int t2,int t3,int t4,int t5){
        int low;
            if (t1<t2&&t1<t3&&t1<t4&&t1<t5){
                t1=0; 
        }  
            else if (t2<t1&&t2<t3&&t2<t4&&t2<t5){
                t2=0; 
        }
            else if (t3<t2&&t3<t1&&t3<t4&&t3<t5){
                t3=0;
        }
            else if (t4<t2&&t4<t3&&t4<t1&&t4<t5){
                t4=0; 
        }
            else if (t5<t2&&t5<t3&&t5<t4&&t5<t1){
                t5=0; 
    }
    return t1+t2+t3+t4+t5;
}