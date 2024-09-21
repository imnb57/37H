/*
jump control -> goto, continue, break,if
*/
// goto example 
#include <stdio.h>

int main() {
    int num = 0;

    // Label to jump to
    start:
    printf("Enter a positive number (or 0 to quit): ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not allowed. Try again.\n");
        goto start;  // Go back to the start label
    }
    
    if (num == 0) {
        goto end;  // Jump to the end
    }
    
    printf("You entered: %d\n", num);
    goto start;  // Go back to the start for another input

    end:
    printf("Program ended.\n");
    return 0;
}
