/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 1/15/23 2:54
 * Purpose:  names using string compare
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>
using namespace std;


int main(int argc, char** argv) {
    
   string a = "";
   string b = "";
   string c = "";
   
    cout << "Sorting Names"<<endl;
    cout << "Input 3 names"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
    /* a b c 
    *  a c b
    *  b a c
    *  b c a
    *  c a b
    *  c b a
    */
    
    if (a < b && b < c) /// abc
    {
        cout <<a<<endl<<b<<endl<<c;
    }
    else if (a < c && c < b) //acb
    { 
        cout <<a<<endl<<c<<endl<<b;
    }
    else if (b < a && a < c) //bac
    { 
        cout <<b<<endl<<a<<endl<<c;
    }
    else if (b < c && c < a ) //bca
    { 
        cout <<b<<endl<<c<<endl<<a;
    }
    else if (c < a && a < b) //cab
    { 
        cout <<c<<endl<<a<<endl<<b;
    }
    else // cba
    {
        cout <<c<<endl<<b<<endl<<a;
    }
    
    return 0;
}