#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;
//Function Prototypes
void score(int &,int &,int &,int &,int &);
float average(int,int,int,int,int);
int lowest(int,int,int,int,int);
//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables

    int t1,t2,t3,t4,t5;
    //Initialize Variables

    score (t1,t2,t3,t4,t5);
   
    //Map/Process the Inputs -> Outputs
 
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(1)<<setw(3)<<average(t1,t2,t3,t4,t5);
    //Exit the Program
    return 0;
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