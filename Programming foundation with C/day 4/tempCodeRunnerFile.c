#include<stdio.h>
int main(){
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
       int result = result + i;
        printf("%d\n",result);

    }
    return 0;
}