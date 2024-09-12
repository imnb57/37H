#include<stdio.h>

int main(){
    float celsius;
    float fahrenheit;
    printf("enter the celsius");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("the fahrenheit is %f\n",fahrenheit);
    return 0 ;
}