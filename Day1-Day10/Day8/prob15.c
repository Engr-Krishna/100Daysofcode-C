/*Write a program to input a character
 and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/


#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c",&ch);
    if(ch>= '0' && ch<='9')
    {
        printf("Digit");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Uppercase alphabet");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase alphabet");
    }
    else 
    {
        printf("Special character");
    }
}