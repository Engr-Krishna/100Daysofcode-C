//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum += (2*i - 1);       
        printf("%d ", 2*i - 1); 
    }
    printf("\nSum of the first %d odd numbers = %d", n, sum);

    return 0;
}