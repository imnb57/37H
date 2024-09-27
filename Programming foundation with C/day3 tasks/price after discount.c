/*
6.	Calculate the Total Price with Discount
Task: Write a program to calculate the total price after applying a discount based on the quantity purchased:
•	1-10 items: 5% discount
•	11-50 items: 10% discount
•	More than 50 items: 15% discount
*/
#include<stdio.h>

int main(){
    float totalPrice = 678;
    int howMany;
    float afterDiscount;
    float finalPrice;
    printf("How many items did you purchase\n");
    scanf("%d",&howMany);

    if(howMany<10 && howMany>1){
        afterDiscount = 0.05*totalPrice;
        finalPrice = totalPrice - afterDiscount;
        printf("Your final price after discount is $%.2f",finalPrice);
    }
    else if (howMany<50 && howMany>11){
        afterDiscount = 0.1*totalPrice;
        finalPrice = totalPrice - afterDiscount;
        printf("Your final price after discount is $%.2f",finalPrice);
    }
    else if (howMany>50){
        afterDiscount = 0.15*totalPrice;
        finalPrice = totalPrice - afterDiscount;
        printf("Your final price after discount is $%.2f",finalPrice);
    }
    return 0;
}