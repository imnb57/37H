#include<stdio.h>
int temp(int a);

int main(){
   float result= temp(34);
   printf("the fahrenheit is %.2f",result);
    return 0;
}
int temp(int celsius){
   int Fahrenheit = (celsius * 9 / 5) + 32;
   return Fahrenheit;
} 