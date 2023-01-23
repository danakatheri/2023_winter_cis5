#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    int liters, miles; //Liters inputted and miles driven.
    float gallons;  //How many gallons transferred from liters.
    float mpg, mpg2; //Miles per gallon of car1 and car2.
    char ans; //Used to determine when to finish loop.
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    do 
    {
            cout<<"Car 1\nEnter number of liters of gasoline:"<<endl;
            cin>>liters;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>miles;
            gallons=0.264179f*liters;
            mpg=miles/gallons;
            cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg<<"\n"<<endl;


            cout<<"Car 2\nEnter number of liters of gasoline:"<<endl;
            cin>>liters;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>miles;
            gallons=0.264179f*liters;
            mpg2=miles/gallons;
            cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg2<<"\n"<<endl;

        if (mpg>mpg2)
                cout<<"Car 1 is more fuel efficient\n"<<endl;
        else 
                cout<<"Car 2 is more fuel efficient\n"<<endl;

        cout<<"Again:\n";
        cin>>ans;

        if (ans=='y' ||ans=='Y')
        {
                cout<<endl;
        }
    } while ((ans=='y')||(ans=='Y'));
    //Display the outputs

    //Exit stage right or left!
    return 0;
}