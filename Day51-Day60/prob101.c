/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int first(int arr[], int n, int t){
    int l=0,r=n-1,res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==t){ res=m; r=m-1; }
        else if(arr[m]<t) l=m+1;
        else r=m-1;
    }
    return res;
}

int last(int arr[], int n, int t){
    int l=0,r=n-1,res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==t){ res=m; l=m+1; }
        else if(arr[m]<t) l=m+1;
        else r=m-1;
    }
    return res;
}

int main(){
    int n, t;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &t);

    int f = first(arr,n,t);
    int l = last(arr,n,t);

    printf("%d,%d", f, l);
    return 0;
}
