#include<stdio.h>

int main(){
    // Program to find the area of a triangle
    
    int width;
    int length;
    int area;
    
    // Get the length and width from the user
    printf("Please enter the length: ");
    scanf("%d", &length);  // Use & to get the address of length

    printf("Please enter the width: ");
    scanf("%d", &width);   // Use & to get the address of width

    // Calculate the area after the input is received
    area = length * width;

    // Display the result
    printf("The area of the triangle is: %d\n", area);

    return 0;
}
