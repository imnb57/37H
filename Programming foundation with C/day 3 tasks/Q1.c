/*
1.	Write a program to check voting eligibility based on age and country. For simplicity, assume the voting age is 18 for all countries.
*/

#include<stdio.h>

int main(){
    //Define a variable to store age of the user
    int age;

    printf("Please enter your age.\n");
    
    //Take the age of user as input
    scanf("%d",&age);

    //Conditionals to print according the conditions provided in the question
    if(age<18){
        printf("Sorry! You are not eligible to vote");
    }
    else{
        printf("You are eligible to vote");
      }
    return 0;
}