/*
5.	Write a program to calculate tax based on annual income:
•	Up to 10,000: No tax
•	10,001 to 50,000: 10% tax
•	50,001 to 100,000: 20% tax
•	Above 100,000: 30% tax
*/
#include<stdio.h>

int main(){
    float salary;
    float taxAmount;
    printf("What is your current salary amount?\n");
    scanf("%f",&salary);
    
    if (salary<10000){
        printf("You do not have to pay taxes");
    }
    else if (salary>10000 && salary<50000){
        taxAmount = 0.01*salary;
        printf("You have to pay %.4f as tax amount",taxAmount);
    }
      else if (salary>50000 && salary<100000){
        taxAmount = 0.02*salary;
        printf("You have to pay %.4f as tax amount",taxAmount);
    }
     else if ( salary>100000){
        taxAmount = 0.03*salary;
        printf("You have to pay %.4f as tax amount",taxAmount);
    }

    return 0;
}