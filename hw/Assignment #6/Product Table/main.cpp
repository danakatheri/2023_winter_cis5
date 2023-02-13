#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
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

    //Exit stage right or left!
    return 0;
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