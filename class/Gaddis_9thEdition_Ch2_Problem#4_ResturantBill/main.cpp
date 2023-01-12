/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: danak
 *
 * Created on January 9, 2023, 11:00 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float mealc = 88.67; // meal total
    float tax = mealc * .0675; // tax of the bill
    float tip = (mealc + tax) * .2; // tip for the bill
    float bill = mealc + tax + tip; // bill total    
             
   
    cout <<"The meal cost $"<<mealc<<endl;
    cout <<"With $"<<tax<<" tax added along with $"<<tip<<" tip"<<endl;
    cout <<"The total of the bill would be $"<<bill<<endl;
    
            
    return 0;
}

