#include<stdio.h>

int area(int ,int);

int main(){
    int display = area(10,20);
    printf("The area is %d",display);
    return 0;
}
int area(int l, int w ){
    int result = l*w;
    return result;
}