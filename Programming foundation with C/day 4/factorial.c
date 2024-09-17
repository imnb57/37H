#include<stdio.h>
int main(){
    int num;
     int factorial = 1;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(int i=num;i>=1;i--){
         factorial *= i;
        printf("%d\n",factorial);
    }
    return 0;
}