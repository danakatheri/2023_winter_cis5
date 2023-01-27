
/* 
 * File:   main.cpp
 * Author: danak
 *
 * Created on January 26, 2023, 10:19 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float pcheck;

    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;

    //Calculate Paycheck
    //payRate=payRatehrsWrkd;
    //cout<<payRate;
    if (hrsWrkd>40)
    {
        pcheck=payRate*(hrsWrkd-40)*2;
        pcheck+=payRate*20*1.5;
        pcheck+=payRate*20;
        //cout<<pcheck;
    }
    else if (hrsWrkd>20&&hrsWrkd<=40)
    {
        pcheck=payRate*(hrsWrkd-20)*1.5;
        pcheck+=payRate*20;
    }
    else {
        pcheck=payRate*hrsWrkd;
    }

    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<setw(6)<<pcheck<<endl;

    return 0;
}

