/*Write a program to calculate the area and circumference of a circle given its radius*/

#include <stdio.h>

int main() {
    float radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;  
    circumference = 2 * 3.1416 * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
