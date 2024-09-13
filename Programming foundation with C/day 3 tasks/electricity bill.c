#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 10);
    } else {
        bill = (100 * 5) + (100 * 10) + ((units - 200) * 15);
    }

    printf("The electricity bill is: %.2f\n", bill);

    return 0;
}
