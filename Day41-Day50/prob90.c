//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - ('a' - 'A');
        else if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + ('a' - 'A');
        printf("%c", s[i]);
    }

    return 0;
}

