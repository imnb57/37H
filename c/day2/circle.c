#include<stdio.h>
//defining the global constants
#define PI 3.14159

int main(){
  //declaring the variables
   float radius;
   float area;
   float cradius;
   float cheight;
   float volume;

    printf("enter the radius");
    scanf("%f",&radius);
    //formula for calculating the area of the circle
    area = PI * (radius * radius);
    printf("the area of the the circle is:%f\n",area);

    printf("enter the radius  of the cylinder");
    scanf("%f,%f",&cradius);
    printf("enter the height  of the cylinder");
    scanf("%f,%f",&cheight);
    //formula for calculating the volume of the cylinder
    volume = PI * (cradius * cradius)* cheight;
    printf("the volume of the cylinder is :%f\n",volume);

    return 0;


}