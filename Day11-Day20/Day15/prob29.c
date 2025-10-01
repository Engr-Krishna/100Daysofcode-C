//Write a program to calculate the factorial of a number.

#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;
    printf("enter a value in n \n");
    scanf("%d",&n);   
    for(i=1; i<=n; i++)
    {
        fact=i*fact;
    }
    printf("factorial of the number = %d",fact);

    return 0;
}