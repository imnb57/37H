#include <stdio.h>

int isArmstrong(int num) {
    int original = num, remainder, result = 0;
    
    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    return result == original;
}

int main() {
    int num = 153;
    
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}
