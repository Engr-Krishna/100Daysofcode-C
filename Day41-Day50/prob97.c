//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') len++;

    if(len > 0 && s[0] != ' ') printf("%c.", s[0]);

    for(int i=0; i<len; i++){
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0' && s[i+1] != '\n'){
            printf("%c.", s[i+1]);
        }
    }

    return 0;
}
