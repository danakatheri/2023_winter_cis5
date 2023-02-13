#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array

float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    float avg = avgX(test,SIZE);
    //Display the outputs
    
    cout<<"The average            = "<< setprecision(7) << fixed << avgX(test,SIZE )<<endl;
    cout<<"The standard deviation = "<< setprecision(7) << fixed << stdX(test,SIZE) <<endl;

    //Exit stage right or left!
    return 0;
}
void  init(float a[],int SIZE){
        for(int i = 0; i < SIZE; i++){
            cin >> a[i];
        }
}
float avgX(float a[], int SIZE){
    float sum = 0;
    for(int i = 0;i < SIZE; i++){
      sum += a[i];
    }
    return (sum/SIZE);
}
float stdX(float a[], int SIZE){
        float sum = 0;
        float avg = avgX (a, SIZE);
        for(int i = 0;i < SIZE; i++){
            sum += ((a[i]- avg) *((a[i] - avg)));
        }
    return sqrt(sum/(SIZE-1));
    
}