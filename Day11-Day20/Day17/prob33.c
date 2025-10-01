//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
int main()
{
    int num,r,temp=0,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        r= temp%10;
        sum+=r*r*r;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a Armstrong number",num);
    }
    else
    {
        printf("%d is not a Armstrong number",num);
    }
}
