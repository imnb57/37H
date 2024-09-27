#include<stdio.h>
/*
    iterative control -> for, while, do while.
    syntax:
    for(initialization;condition;increment/decrement){
            //body
    }
*/

// for loop

int main(){
    int i;
    printf("Enter any number\n");
    scanf("%d",&i);
    for(int j=1;j<11;j++){
        int result =i*j;
        printf("%d*%d = %d\n",i,j,result);
    }
    return 0;

}

