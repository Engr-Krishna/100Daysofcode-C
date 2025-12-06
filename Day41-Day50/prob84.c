//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - ('a' - 'A');
        printf("%c", s[i]);
    }

    return 0;
}
