#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;
//function prototype
float psntVal(float,float,int);

int main(int argc, char** argv){
    
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
    return 0;
}
float psntVal(float F,float r,int n){
    r *= 0.01;
    return F / pow((1 + r), n);
    
}