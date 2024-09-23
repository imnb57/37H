#include<stdio.h>

int  sum(int);

int main(){
    int number = 5;
    int result =sum(5);
    printf("the factorial of %d natural number is %d\n",number,result);

}
int sum(int a){
    if(a ==1){
        return a;

    }else{
        return a * sum(a-1);
    }
}