//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') len++;

    int start = 0, wordCount = 0;
    for(int i=0;i<=len;i++){
        if(s[i]==' ' || s[i]=='\0' || s[i]=='\n'){
            wordCount++;
            start = i+1;
        }
    }

    start = 0;
    int currentWord = 1;
    for(int i=0;i<=len;i++){
        if(s[i]==' ' || s[i]=='\0' || s[i]=='\n'){
            if(currentWord < wordCount) printf("%c.", s[start]);
            else {
                for(int j=start;j<i;j++) printf("%c", s[j]);
            }
            start = i+1;
            currentWord++;
        }
    }

    return 0;
}
