//Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int num, r;
    int revnum = 0;
    printf("Enter a number \n");
    scanf("%d", &num);
    while(num > 0)
    {
        r = num % 10;
        revnum = revnum * 10 + r;
        num = num / 10;
    }
    printf("Reverse number = %d\n", revnum);
    return 0;
}