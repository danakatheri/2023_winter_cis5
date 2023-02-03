

/* 
 * File:   main.cpp
 * Author: danak
 * Created on Jan 31st
 *  * Purpose: Project #1
 */
//System Lib

#include <iostream> //Input Output Library
#include <stdlib.h> // 



using namespace std;

//User LIBRARIES
 
 //Global Constants not Variables

//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    
    
    
    int i, j , height = 15; // the wall boundaries 
    int width = 15;
    int fruitx, fruity, x, y, score;
    int gameover, flag;
    
    x = height / 2;  // fruits
    y = width / 2;
    label1:
           fruitx = rand() % 20;
        if (fruitx == 0)
                goto label1;
    label2:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label2;
    score = 0;
  
    
  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      if (i == 0 || i == width - 1 ||
        j == 0 ||
        j == height - 1) {
        printf("#");
      } else {
        if (i == x && j == y)
          printf("x");
        else if (i == fruitx && j == fruity)
          printf("*");
        else
          printf(" ");
      }
    }
    printf("\n");
  }
    
    if (x < 0 || x > height || y < 0 || y > width)// boundary
            gameover = 1;
     
 
    return 0;
}

