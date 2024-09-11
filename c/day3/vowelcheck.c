#include<stdio.h>

int main(){
    char input;
    printf("please enter a character\n");
    scanf("%c",&input);
    if(input == 'A'||'a' || input =='E'||'e'||input == 'I'||'i'|| input == 'O'||'o' ||input == 'U'||'u' ){
        printf("You entered a vowel");
    }
    else{
        printf("You entered a consonant");
    }

}