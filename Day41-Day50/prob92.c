//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int freq[26] = {0};
    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];
        if(c >= 'a' && c <= 'z') {
            freq[c-'a']++;
            if(freq[c-'a'] == 2) {
                printf("%c", c);
                return 0;
            }
        }
    }

    printf("-1");
    return 0;
}
