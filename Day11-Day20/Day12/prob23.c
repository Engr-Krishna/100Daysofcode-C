/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include<stdio.h>
int main()
{
    int limit_day, sub_day , fine , delay=0;
    printf("Enter the limit day and submission day \n");
    scanf("%d %d",&limit_day, &sub_day);
    delay=sub_day-limit_day;
    printf("DELAY %d \n",delay);
    if(delay<=5)
    {
        fine=(delay)*2;
        printf("Fine ₹%d",fine);
    }
    else if(delay<=10)
    {
        fine=delay*4;
        printf("Fine ₹%d",fine);   
    }
    else if(delay<=30)
    {
        fine=delay*6;
         printf("Fine ₹%d",fine);
    }
    else if(delay>30)
    {
        printf("Membership cancel");
    }
    else
    {
        printf("No fine");
    }
}