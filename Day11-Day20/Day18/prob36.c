//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>
int main()
{
    int num1, num2 , hcf=1 , min;
    printf("Enter two numbers \n");
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    min=num1;
    else
    min=num2;
    for(int i=1; i<min ; i++)
    {
        if(min%i==0)
        hcf=i;
    }
    printf("HCF of %d and %d = %d",num1,num2,hcf);
}