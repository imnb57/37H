/*
Banking application in C
19: Simple Banking Application

Description: Create a banking application in C that provides the following functionalities:

Withdraw: The user should be able to withdraw money from their account if they have sufficient balance.


Add Funds: The user can add funds from external sources.

Check Balance: The user can check their current account balance.

Specifications:

Start with an initial balance of 10,000.
If the user tries to withdraw more than their balance, print "Insufficient funds."
If the deposit or add funds amount is less than or equal to 0, print "Invalid amount."
*/

#include<stdio.h>

int main(){
    float current = 10000;
    float wamount;
    float aamount;
    char  choice;
    float new;
    

 
    printf("What service would you like to use\n");
    printf("Enter 'w' to withdraw, 'a' to add funds,'c' to check funds\n");
    scanf("%c",&choice);

    
    if(choice == 'c'){
        printf("Your current amount is $%.2f\n",current);   
    }

    else if (choice == 'w'){
        printf("How much would you like to withdraw?\n");
        scanf("%.2f",&wamount);
        if(wamount<0 && wamount>current){
            printf("Sorry you cannot withdraw negative amount\n");
        }
        else{ printf("The amount $%.2f is successfully withdrawn\n",wamount);
        new = current - wamount;
        printf("Your new balance is $%.2f",new);
        }
    }

    else if(choice == 'a'){
        printf("How much would you like to add?\n");
        scanf("%f",&aamount);
        if(aamount<0){
            printf("You cannot add negative amount to your account");
        }
        else{
              printf("The amount $%.2f has been succesfully added to your account\n",aamount);
              new = current + aamount;
              printf("Your new balance is $%.2f\n",new);
        }
    }
    else if (choice != 'w'||choice !='a'||choice !='c'){
        printf("Invalid choice");
    }
    printf("Thank you for banking");


    return 0;
}
