#include<stdio.h>
int armstrongcheck();

int main(){
    int num = armstrongcheck();
    if(!num){
        printf("The number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}
int armstrongcheck(){
    int num;
    printf("Enter a three digit number\n");
    scanf("%d",&num);
     
    return num;
}