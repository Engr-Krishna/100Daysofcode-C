//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char s[1000], c;
    fgets(s, 1000, stdin);
    scanf(" %c", &c);

    int count = 0;
    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(s[i] == c) count++;
    }

    printf("%d", count);
    return 0;
}
