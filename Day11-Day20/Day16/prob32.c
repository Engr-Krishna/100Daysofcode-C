//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
    int num, r,temp;
    int revnum = 0;
    printf("Enter a number \n");
    scanf("%d", &num);
    temp=num;
    while(num > 0)
    {
        r = num % 10;
        revnum = revnum * 10 + r;
        num = num / 10;
    }
    printf("Reverse number = %d\n", revnum);
    if(revnum==temp)
    {
        printf("PALINDROME NUMBER");
    }
    else
    {
        printf("NOT A PALINDROME NUMBER");
    }
    return 0;
}