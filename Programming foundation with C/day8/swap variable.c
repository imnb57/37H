#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int temp;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("after swapping\n");
    temp =a;
    a = b;
    b = temp;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);

}
