//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main()
{
    int num,ctr=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            ctr++;
        }
    }
    if(ctr==2)
    printf("%d is a prime number",num);
    else
    printf("%d is not a prime number",num);
}