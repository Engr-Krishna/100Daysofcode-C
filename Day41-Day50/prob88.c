//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(s[i] == ' ') s[i] = '-';
        printf("%c", s[i]);
    }

    return 0;
}
