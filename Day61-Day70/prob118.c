//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Number of elements cannot be non positive");
        return 0;
    }
    
    int nums[n];
    int a[n+1];
    for(int i=0;i<n+1;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&nums[i]);
        a[nums[i]]=1;
    }
    for(int i=0;i<n+1;i++)
    {
        if(a[i]==0)
        {
        printf("%d",i);
        break;
       }
    }
    
    return 0;
}