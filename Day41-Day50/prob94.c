//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int maxLen = 0, start = 0, len = 0, wordStart = 0;
    for(int i=0; ; i++){
        if(s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            if(len > maxLen) {
                maxLen = len;
                start = wordStart;
            }
            len = 0;
            wordStart = i+1;
        } else {
            len++;
        }
        if(s[i] == '\0' || s[i] == '\n') break;
    }

    for(int i=start; i<start+maxLen; i++) printf("%c", s[i]);

    return 0;
}
