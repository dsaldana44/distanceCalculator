/* 

    Program: A simple distance calculator 
    Author: 
    Date: 25 Jan 18
    Purpose: Yet another example of program development process 
             this program will implement the formula:
                  Distance = Rate x Time
                   
             Program Design --> Data Design + Algorithum Design 
             Data Design (identify the required constant and variable 
                          data items which support the solution)
                 Use "Define" to declare ALL symbolic constants, 
                 Use "Declare" to indicate ALL symbolic variables
                 
             Declare Distance as real 
             Declare Rate as real 
             Declare Time as real 
             Declare REPORTLINEMESSAGE as constant string 
             
*/

#include <stdio.h>
#define REPORTLINEMESSAGE  "  The distance with rate of %6.2f and elapsed time of %5.2f = %7.2f units\n"
#define ADDR(var) &var 

int main(void)
{ 

             float Distance;
             float Rate;
             float Time;
             
             printf("  Enter the rate of travel ==> "); 
             scanf("%f",&Rate);
             printf("  Enter the rate of time of travel ==> "); 
             scanf("%f",ADDR(Time));
             
             Distance = Rate * Time;
             
             printf(REPORTLINEMESSAGE,Rate,Time,Distance);
             
             fflush(stdin),getchar(); 
             return 0;
}             
