//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        printf("%c\n", s[i]);
    }

    return 0;
}
