//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main()
{
    char alp;
    printf("Enter a alphabet \n");
    scanf("%c",&alp);
    if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u')
    {
        printf("Vowel");
    }
    else
    printf("Consonant");
}