#include <stdio.h>

#define PI 3.14159

int main() {
   
    float cradius, cheight, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &cradius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &cheight);
    volume = PI * (cradius * cradius) * cheight;
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}
