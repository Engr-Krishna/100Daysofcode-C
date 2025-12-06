//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') continue;
        printf("%c", c);
    }

    return 0;
}
