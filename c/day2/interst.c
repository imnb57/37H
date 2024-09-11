#include<stdio.h>

int main(){
    float principle;
    float time;
    float rate;
    float interst;


    printf("enter principle\n");
    scanf("%f",&principle);

    printf("enter time\n");
    scanf("%f",&time);

    printf("enter rate\n");
    scanf("%f",&rate);

    interst = (principle * time * rate )/100;
    
    printf("the interst is: %f\n",interst);


    return 0;
}