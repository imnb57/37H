/*
2.	Write a Program to check if a character is a vowel
*/
#include<stdio.h>

int main(){
    char input;
    printf("please enter a character\n");
    scanf("%c",&input);
    if(input == 'A' || input == 'a' || input == 'E' || input == 'e' || input == 'I' || input == 'i' || input == 'O' || input == 'o' || input == 'U' || input == 'u')
{
        printf("You entered a vowel");
    }
    else{
        printf("You entered a consonant");
    }

}