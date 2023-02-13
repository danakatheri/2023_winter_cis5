
/* 
 * File:   main.cpp
 * Author: danak
 * Created on Feb 2,2023 
 * Purpose: Project #1
 */
//System Lib

#include <iostream> //Input Output Library
#include <ctime> 
#include <iomanip>
#include <cstdlib> 
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 
void display(string); // intro
void display2( int, int , int, int [], int [], string, bool); //target and rolls
int roll(int, int, int[], int[], int); // displaying rolls
bool cwin(int, int, int, string); // if win or loose
bool again (int, int, char, string); // wants to play again
void swap(int*, int*); 
void bubble  (int [], int);// bubble sort
void selSort(int[],int); //selection sort
int linSrch(int[],int, int); // linear search
void pArray (int[], int); // to print
int sizeArr(int [], int); //count number array elements
void fillArr(int[], int[], int); //fill array


int main(int argc, char** argv) {
    
    //variables 
    
    int dice1,dice2, rolls,total, diff; 
    int sum = 0; // sum of the dices
    char choice; // choice of either yes or no
    char check; // to know if they win or lose
    string name; // players name
    int target; // target number 
    int count[6]; // count array
    int history[500];
    int n = sizeof(history) / sizeof(history[0]);
    for (int i = n - 1; i >= 0; i--) 
        history[i] = -1;
    
    bool play = true; 

    // random number seed
    srand(time(0));
    cout<<endl;
    //displaying each prototype 
    
    display(name);
    display2(target, rolls, sum, count, history, name, play);
    
    int arrSize = sizeArr(history, n);
    int bubArr[arrSize];
    int select[arrSize];
    int linear[arrSize];
    fillArr(bubArr, history, arrSize);
    fillArr(select, history, arrSize);
    fillArr(linear, history, arrSize);
    
    
    bubble(bubArr, arrSize);
    selSort(select,arrSize);
    printf("Bubble sort dice rolls:\n");
    pArray (bubArr, arrSize);
    printf("Selection sort dice rolls:\n");
    pArray (select, arrSize);
            
    return 0;
}

void display(string name){
    //introduction to the game
    cout<< " \t Guessing game with dice\n";
    cout<< "Pick your targeted amount"<<endl;
    cout<< "Proceed to roll as any dice to get your targeted amount"<<endl;
    // ask for players name
    cout<< "What is your name?"<<endl;
    cin>> name;
}

void display2(int target, int rolls, int sum, int count[6], int history[], string name, bool play){

    int index = 0;
    while(play == true){    
        cout<< "What number do you want to target to from 1-21?"<<endl; 
        cin >> target;
        // input validation 
        if (target>21 || target < 1){ 
            cout<<"Invalid Input, Please enter a number from 1-21"<<endl;
            cin >> target;
        }
        //if sum of the dice is less than the target, continue
        while (sum<=target){ 
            cout<< "Do you want to roll 1 or 2 dice? ⚃"<<endl;
            cin >> rolls;
                
            if (rolls == 1 || rolls == 2)
            {
                sum = roll(rolls,sum, count, history, index);
            }
            play = cwin(sum, target, rolls, name);
            index++;
                
            if (play == true)
            {
                sum = 0;
                rolls =0;
                break;
            }
        }
    }
}

int roll(int rolls, int sum, int count[6], int history[], int index){
    
    int dice1,dice2;    
    
    if (rolls == 1){ 
    //subtract one 
        rolls--; 
        //dice #1 and randomize the number
        //value of dice #1 (1-6) 
        dice1 = rand() % 6 + 1; 
        if (dice1 == 1)
        {
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|     ●    |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 1; 
                count[0]+=1;
        }//if
        else if (dice1 == 2)
        {
            cout << "=============" << endl;
            cout << "| ●        |" << endl;
            cout << "|           |" << endl;
            cout << "|        ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 2;
                count[1]+=1;
        }//else if
        else if (dice1 == 3)
        {
            cout << "=============" << endl;
            cout << "| ●         |" << endl;
            cout << "|     ●     |" << endl;
            cout << "|         ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 3; 
                count[2]+=1;
        }//else if
        else if (dice1 == 4)
        {
            cout << "============" << endl;
            cout << "| ●     ● |" << endl;
            cout << "|           |" << endl;
            cout << "| ●     ● |" << endl;
            cout << "============" << endl;
                // adds to sum
                sum += 4; 
                count[3]+=1;
        }//else if
        else if (dice1 == 5)
        {
            cout << "=============" << endl;
            cout << "| ●      ● |" << endl;
            cout << "|     ●     |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 5; 
                count[4]+=1;
        }//else if
        else if (dice1 == 6)
        {
            cout << "=============" << endl;
            cout << "| ●      ● |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 6; 
                count[5]+=1;
        }//else if
        cout << endl;
        history[index] = sum;
    }
        //dice #2      
    else if (rolls == 2){ 
        
        rolls -= 2;
        //value of dice #1 (1-6)
        dice1 = rand() % 6 + 1;
        //value of dice #2 (1-6)
        dice2 = rand() % 6 + 1;
        if (dice1 == 1)
        {
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|     ●    |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 1; 
                count[0]+=1;
        }//if
        else if (dice1 == 2)
        {
            cout << "=============" << endl;
            cout << "| ●        |" << endl;
            cout << "|           |" << endl;
            cout << "|        ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 2; 
                count[1]+=1;
        }//else if
        else if (dice1 == 3)
        {
            cout << "=============" << endl;
            cout << "| ●         |" << endl;
            cout << "|     ●     |" << endl;
            cout << "|         ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 3; 
                count[2]+=1;
        }//else if
        else if (dice1 == 4)
        {
            cout << "============" << endl;
            cout << "| ●     ● |" << endl;
            cout << "|           |" << endl;
            cout << "| ●     ● |" << endl;
            cout << "============" << endl;
                // adds to sum
                sum += 4; 
                count[3]+=1;
        }//else if
        else if (dice1 == 5)
        {
            cout << "=============" << endl;
            cout << "| ●      ● |" << endl;
            cout << "|     ●     |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 5;
                count[4]+=1;
        }//else if
        else if (dice1 == 6)
        {
            cout << "=============" << endl;
            cout << "| ●      ● |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 6; 
                count[5]+=1;
        }//else if

        cout << endl;

        if (dice2 == 1)
        {
            cout << "=============" << endl;
            cout << "|           |" << endl;
            cout << "|     ●    |" << endl;
            cout << "|           |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 1; 
                count[0]+=1;
        }//if
        else if (dice2 == 2)//
        {
            cout << "=============" << endl;
            cout << "| ●        |" << endl;
            cout << "|           |" << endl;
            cout << "|        ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 2;
                count[1]+=1;
        }//else if
        else if (dice2 == 3)
        {
            cout << "=============" << endl;
            cout << "| ●         |" << endl;
            cout << "|     ●     |" << endl;
            cout << "|         ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 3; 
                count[2]+=1;
        }//else if
        else if (dice2 == 4)
        {
            cout << "============" << endl;
            cout << "| ●     ● |" << endl;
            cout << "|           |" << endl;
            cout << "| ●     ● |" << endl;
            cout << "============" << endl;
                // adds to sum
                sum += 4; 
                count[3]+=1;
        }//else if
        else if (dice2 == 5)
        {
            cout << "=============" << endl;
            cout << "| ●      ● |" << endl;
            cout << "|     ●     |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "=============" << endl;
                // adds to sum
                sum += 5; 
                count[4]+=1;
        }//else if
        else if (dice2 == 6)
        {
            cout << "=============" << endl;
            cout << "| ●      ● |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "| ●      ● |" << endl;
            cout << "=============" << endl;
                 // adds to sum
                sum += 6;
                count[5]+=1;
        }
        history[index] = sum;//else if
    }
    return sum;
}
bool cwin(int sum, int target,int rolls, string name){
    int diff;
    char check;
    bool end;
    diff = target - sum; 
                        
    // states total amount
    cout <<"You total amount so far is " <<sum<<endl; 
    cout << "The difference between what you rolled and your target number is:  "<<diff<<endl;
    //to find out what they need to go to left
    
    //if the sum is the target go to 'w'
    if(sum==target){
        check = 'W';
    }
    //if the sum is greater than the target, go to 'l'
    else if (sum>target){
        check= 'L';
    }
    //the message to the player of what their results are 
    switch(check){
        case 'W':
            cout << "You won !!! :D "<<endl;
            end = again(sum, rolls, check, name);
            return end;
                               
        case 'L':
            cout << "You lost! Sorry  :( "<<endl;
            end = again(sum, rolls, check, name);
            return end;
    }
    return end;                    
}
//
void swap(int* xp, int* yp){
    int temp = *xp;
    
    *xp = *yp;
    *yp = temp;
}

// bubble sorting
void bubble(int history[], int n){
    int i, j;
    for (int i = 0; i < n; i++)
        // Last i elements are already in place
        for ( int j = 0; j < n - i - 1; j++)
            if (history[j] > history[j + 1])
                swap(&history[j], &history[j + 1]);
}

// selection sort
void selSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int indx=i;
        for(int j=i+1;j<n;j++){
            if(a[indx]>a[j])indx=j;
        }
        swap(&a[i],&a[indx]);
    }
}

// linear search
int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}
 
// Function to print an array 
void pArray(int arr[], int n){
    int i;
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// figuring out the size within an array
int sizeArr(int history[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(history[i] != -1){
            count++;
        }
    }
    return count;
}
// filling the array of numbers
void fillArr(int arr[], int history[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(history[i] != -1){
            arr[count] = history[i];
            count++;
        }
    }
}

//asking if they want to play again
bool again (int sum, int rolls, char check, string name){
    char choice;
    cout<<"Do you want to play again? y/n"<<endl; 
    cin>> choice;
    switch(choice){
        // go back to loop
        case 'y': case 'Y':
            cout<<"Lets go!"<<endl;
            return true;
        //ends game
        case 'n' : case 'N':
            cout<< "Thank you for playing !!!!"<<endl;
            return false;
    }
    exit(0);
    return false;
}