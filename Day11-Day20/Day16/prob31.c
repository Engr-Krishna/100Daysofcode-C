//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>
int main() {
    int num, bin = 0, rem, place = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        rem = temp % 2;
        bin = bin + rem * place;         // put remainder at the correct place in binary number
        place = place * 10;              // move to next higher place (units -> tens -> hundreds...)
        temp = temp / 2;
    }

    printf("Binary equivalent of %d is %d\n", num, bin);
    return 0;
}