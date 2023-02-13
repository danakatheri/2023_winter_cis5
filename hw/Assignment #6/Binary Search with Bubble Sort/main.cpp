/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int);
void bublSrt(int [],int);
void swap1(int &,int &);
bool binSrch(int [],int,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}
void fillAry(int array[],int SIZE){
    for(int i=0;i<SIZE;i++){
        array[i]=rand()%90+10;
    }
}
void prntAry(int array[],int SIZE){
  
    for(int i=0;i<SIZE;i++){
        cout<<array[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }
    cout<<endl;
}
bool binSrch(int array[],int SIZE,int val,int indx){
    int high=SIZE-1,low=0;
    do{
        int middle=(high+low)/2;
        if(indx==array[middle]){
            return middle;
        }else if(indx<array[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<=high);
    return -1;
}
void bublSrt(int array[],int SIZE){
    bool swap;
    int redList=SIZE-1;
    do{
        swap=false;
        for(int i=0;i<redList;i++){
            if(array[i]>array[i+1]){
                swap1(array[i],array[i+1]);
                swap=true;
            }
        } 
       redList--;
    }while(swap);
}
void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}