#include<stdio.h>

void fibo(int count);

int main(){
    int a = 0;
    int b = 1;
    int count = 5;
    printf("%d %d", a, b);  
    fibo(count-2);
    return 0;
}

void fibo(int count){
    static int a = 0, b = 1;
    int next;  
    if(count > 0){
        next = a + b;
        printf(" %d", next);  
        a = b;  
        b = next;  
        fibo(count - 1);  
    }
}
