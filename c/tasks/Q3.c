/*
3.	WAP to print whether the year is a leap year or not.
*/
#include<stdio.h>

int main(){
    int year;
    printf("Please enter a year\n");
    scanf("%d", &year);
    
    if (year % 400 == 0) {
      
        printf("The year you entered is a leap year\n");
    } 
    else if (year % 100 == 0) {
       
        printf("This is not a leap year\n");
    } 
    else if (year % 4 == 0) {
       
        printf("The year you entered is a leap year\n");
    } 
    else {

        printf("This is not a leap year\n");
    }

    return 0;
}
