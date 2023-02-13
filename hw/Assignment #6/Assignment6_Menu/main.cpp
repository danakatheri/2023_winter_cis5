/* 
 * File:   main.cpp
 * Author: Dana Rodriguez
 * Created on 2/6/23
 * Purpose:  Assignment 6
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
const int COLS=6;
const int ROWS=6;
const int SIZE=50;
//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();void fillTbl(int [][COLS],int);
                void prntTbl(const int [][COLS],int);
void problem2();void fillTbl(int [][COLS],int);
                void prntTbl(const int [][COLS],int);
void problem3();void  init(int [],int);//Initialize the array
                void  print(int [],int,int);//Print the array
                void  revrse(int [],int);//Reverse the array
void problem4();void  init(float [],int);//Initialize the array
                float avgX(float [],int);//Calculate the Average
                float stdX(float [],int);//Calculate the standard deviation
void problem5();
void problem6();void fillAry(int [],int);
                void prntAry(int [],int,int);
                bool linSrch(int [],int,int);

void problem7();void fillAry(int [],int);
                void prntAry(int [],int);
                void selSrt(int [],int);
                bool binSrch(int [],int,int, int);
void problem8();void fillAry(int [],int);
                void prntAry(int [],int);
                void bublSrt(int [],int);
                void swap1(int &,int &);
                bool binSrch(int [],int,int,int);



//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            case 7:    problem7();break;
            case 8:    problem8();break;
            
            default:   def(inN);
	}
    }while(inN<9);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type 7 to execute Problem 7"<<endl;
    cout<<"Type 8 to execute Problem 8"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    const int ROWS=6;
    int tablSum[ROWS][COLS]={{2,3,4,5,6,7},
                              {3,4,5,6,7,8},
                              {4,5,6,7,8,9},
                              {5,6,7,8,9,10},
                              {6,7,8,9,10,11},
                              {7,8,9,10,11,12}};
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
            cout << "Think of this as the Sum of Dice Table"<<endl;
            cout << "           C o l u m n s"<<endl;
            cout << "     |   1   2   3   4   5   6"<<endl;;
            cout << "----------------------------------"<<endl;
    
    //Display the outputs
    prntTbl(tablSum,ROWS);
}

void problem2(){
     const int ROWS=6;
    int tblProd[ROWS][COLS]={{1,2,3,4,5,6},
                             {2,4,6,8,10,12},
                             {3,6,9,12,15,18},
                             {4,8,12,16,20,24},
                             {5,10,15,20,25,30},
                             {6,12,18,24,30,36}};
                             
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd,ROWS);
            cout << "Think of this as a Product/Muliplication Table"<<endl;
            cout << "           C o l u m n s"<<endl;
            cout << "     |   1   2   3   4   5   6"<<endl;;
            cout << "----------------------------------"<<endl;
    //Display the outputs
    prntTbl(tblProd,ROWS);
}

void problem3(){
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


}

void problem4(){
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
}

void problem5(){
    
}

void problem6(){
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
}
void problem7(){
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

}
void problem8(){
       srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
}

void fillTbl(int tablSum[][COLS],int ROWS){
    cout<< "";
}
void prntTbl(const int tablSum[][COLS],int ROWS){
    char* rows = " ROWS ";
    for(int x = 0; x < ROWS; x++){
        cout << rows[x] <<  "  " << x + 1 << " |";
        for(int y = 0; y < COLS; y++){
                cout<<setw(4)<<tablSum[x][y];
        }
        cout<<endl;
    }
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
bool binSrch(int array[],int SIZE,int val,int indx){
    int high=SIZE-1,low=0;
    do{
        int middle=(high+low)/2;
        if(val==array[middle]){
            return middle;
        }else if(val<array[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<=high);
    return -1;
}
void prntAry(int array[],int SIZE){
    
    for(int i=0;i<SIZE;i++){
           cout<<array[i]<<" ";
            if(i%10==(10-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int array[],int SIZE){
    for(int i=0;i<SIZE;i++){
        cin>>array[i];
        
    }
}
void selSrt(int array[],int SIZE){
    for(int i=0;i<SIZE-1;i++){
        for(int j=i+1;j<SIZE;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

}
void fillAry(int array[],int SIZE){
    for(int i=0;i<SIZE;i++){
        array[i]=rand()%90+10;
    }
}
void prntAry(int array[],int SIZE){
  
    for(int i=0;i<SIZE;i++){
        cout<<array[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }
    cout<<endl;
}
bool binSrch(int array[],int SIZE,int val,int indx){
    int high=SIZE-1,low=0;
    do{
        int middle=(high+low)/2;
        if(indx==array[middle]){
            return middle;
        }else if(indx<array[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<=high);
    return -1;
}
void bublSrt(int array[],int SIZE){
    bool swap;
    int redList=SIZE-1;
    do{
        swap=false;
        for(int i=0;i<redList;i++){
            if(array[i]>array[i+1]){
                swap1(array[i],array[i+1]);
                swap=true;
            }
        } 
       redList--;
    }while(swap);
}
void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}