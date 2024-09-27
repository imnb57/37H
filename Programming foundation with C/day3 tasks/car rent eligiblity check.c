/*
7.	Write a program to determine if a person can rent a car based on their age and driving license status. A person must be at least 21 years old and have a valid driving license.
*/
#include<stdio.h>

int main(){
    int age;
    char status;

    printf("Please enter your age\n");
    scanf("%d", &age);

    if(age >= 21) {
        printf("Enter 'y' if you have a license and 'n' if you don't\n");
        scanf(" %c", &status);

        if(status == 'y'){
            printf("You are eligible to rent a car\n");
        } else {
            printf("You are not eligible to rent a car\n");
        }
    } 
    else {
        printf("You are not eligible to rent a car\n");
    }

    return 0;
}
