#include<stdio.h>

int swap(int* a,int* b);
    int a = 10;
    int b = 20;
    int temp;

int main(){
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("after swapping\n");
    swap(&a,&b);
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    return 0;

}
int swap(int* a,int* b){
     temp = *a;
     *a = *b;
     *b = temp;
}