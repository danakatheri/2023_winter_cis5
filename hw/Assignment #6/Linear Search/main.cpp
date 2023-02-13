#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    
    if(linSrch(array,SIZE,indx))
        cout<<val<<" was found at indx = 13"<<endl;
    
    //Exit stage right or left!
    return 0;
}
void fillAry(int array[],int SIZE){
    for(int i=0;i<SIZE;i++){
        array[i]=rand()%50+10;//[10,59]
    }
}
bool  linSrch(int array[],int SIZE,int indx){
    for(int i=0;i<SIZE;i++){
        if(array[i]==indx)return i;
    }
    return -1;
}
void prntAry(int array[],int SIZE,int val){
    
    for(int i=0;i<SIZE;i++){
        cout<<array[i]<<" ";
        if(i%val==(val-1))cout<<endl;
    }
    cout<<endl;
}