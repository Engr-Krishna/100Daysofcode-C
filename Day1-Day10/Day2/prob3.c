/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main(){
    int length, width, area, perimeter;
    printf("Enter the length");
    scanf("%d", &length);

    printf(" Enter the width");
    scanf("%d", &width);

    area=length*width;
    perimeter=2*(length+width);

    printf("Area= %d\n", area);
    printf("Perimeter= %d\n", perimeter);

    return 0;


}
