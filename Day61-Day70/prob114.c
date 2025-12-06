//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastSeen[256];
    int i, len;
    int maxLength = 0;
    int start = 0;

    for (i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        
        unsigned char ch = s[i];

        
        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }

        
        lastSeen[ch] = i;

        
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}