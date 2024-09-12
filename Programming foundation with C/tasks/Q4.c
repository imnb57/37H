/*
4.	Write a program to classify a person’s weight status based on their BMI. The categories are:
bmi = weight / (height * height);
•	Underweight: BMI < 18.5
•	Normal weight: 18.5 ≤ BMI < 24.9
•	Overweight: 25 ≤ BMI < 29.9
•	Obese: BMI ≥ 30
*/
#include<stdio.h>

int main(){
    float weight;
    float height;
    float bmi;

    printf("Please enter your weight in kilogrmas\n");
    scanf("%f",&weight);
    printf("Please enter your height in meters\n");
    scanf("%f",&height);

    bmi = weight / (height * height);
    if(bmi<18.5){
        printf("You are underweight");
    }
    else if (bmi<24.9 && bmi >18.5){
        printf("You are normal weight");
    }
     else if (bmi<29.9 && bmi >25){
        printf("You are overweight");
    }
    else if (bmi>=30){
        printf("You are obese");
    }

    return 0;
}