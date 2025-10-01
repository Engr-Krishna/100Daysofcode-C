//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main()
{
    int sec,min,hr;    
    printf("Enter time in seconds \n");
    scanf("%d",&sec);
    min=sec/60;       
    sec=sec%60;         
    hr=min/60;          
    min=min%60;
    printf("%d:",hr);
    printf("%d:",min);
    printf("%d",sec);
}