//Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("Largest is %d",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("Largest is %d",num2);
    }
    else
    {
        printf("Largest is %d",num3);
    }
}