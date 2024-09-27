#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter age of first person: ");
    scanf("%d", &age1);

    printf("Enter age of second person: ");
    scanf("%d", &age2);

    printf("Enter age of third person: ");
    scanf("%d", &age3);

    if (age1 >= age2) {
        if (age1 >= age3) {
            printf("The oldest person is the first one with age %d.\n", age1);
        } else {
            printf("The oldest person is the third one with age %d.\n", age3);
        }
    } else {
        if (age2 >= age3) {
            printf("The oldest person is the second one with age %d.\n", age2);
        } else {
            printf("The oldest person is the third one with age %d.\n", age3);
        }
    }

    return 0;
}
