#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}
void  init(int test[],int SIZE){
     for(int i = 0; i < SIZE; i++){
            cin >> test[i];
            
        }
}

void  print(int test[],int SIZE,int x){
    for ( int i = 0; i < SIZE; i++){
        cout<<test[i]<< " ";
        if (((i + 1) % x) == 0){
            cout<<endl;
        
        }
    }
}
void  revrse(int test[],int SIZE){
    int y;
     for (int i = 0; i < SIZE/2; i++){
         y = test[i];
         test[i] = test[SIZE - i -1];
         test[SIZE - i -1] = y;
     
       
}
}