#include<stdio.h>

int main(){
     char alphabet;
     printf("Enter any alphabet\n");
     scanf("%c",&alphabet);

     switch(alphabet){
        case 'a':
            printf("a is vowel\n");
            break;
        
        case 'e':
            printf("e is vowel\n");
            break;
        
        case 'i':
            printf("i is vowel\n");
            break;
        
        case 'o':
            printf("o is vowel\n");
            break;
        
        case 'u':
            printf("u is vowel\n");
            break;
        
        default:
            printf("You entered a consonant");
        
     }
     return 0;
}