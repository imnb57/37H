//Array
#include<stdio.h>
int main(){
    int a[3];
    int highest;
    printf("please enter the numbers:\n");
    for(int i =0;i<3;i++){
        scanf(" %d" ,&a[i]);
    }

    for(int i =0;i<3;i++){
        printf("value at index %d is %d\n",i, a[i]);
    }
    
    highest = a[0];
    for(int i=0;i<3;i++){
        if(a[i]>highest){
            highest = a[i];
            printf("the highest number is %d",highest);
        }
    }
}