#include<stdio.h>

int simple(float,float,float);

int main(){
    float result = simple(10000,2,6.7);
    printf("The simple interst is %.2f",result);
    return 0;
}
int simple(float p, float t,float r){
    return (p*t*r)/100;
}