//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() {
    int n;
    int i;
    long long expectedSum;
    long long actualSum = 0;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements for a repeat.\n");
        return 1;
    }

    
    printf("Enter %d elements (assuming 0 to %d, one repeated):\n", n, n - 2);
    
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        actualSum += num;
    }

    
    long long n_minus_2 = n - 2;
    expectedSum = (n_minus_2 * (n_minus_2 + 1)) / 2;

    
    long long repeatedNumber = actualSum - expectedSum;

    printf("The repeated element is: %lld\n", repeatedNumber);

    return 0;
}