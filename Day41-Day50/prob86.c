//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') len++;

    int flag = 1;
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-1-i]){
            flag = 0;
            break;
        }
    }

    if(flag) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
