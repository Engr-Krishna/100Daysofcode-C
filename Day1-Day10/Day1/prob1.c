/*Write a program to input two numbers and display their sum.*/
#include<stdio.h>
int main() {
    int Num1, Num2, Sum;
    
    printf("Enter number 1 \n");
    scanf("%d", &Num1);

    printf("Enter number 2 \n");
    scanf("%d", &Num2);

    Sum=Num1+Num2;

    printf(" Sum=%d", Sum);

    return 0;
}