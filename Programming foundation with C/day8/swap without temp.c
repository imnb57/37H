#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    printf("Before swap: a = %d, b = %d, c = %d\n", a, b, c);
    
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
    
    printf("After swap: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
