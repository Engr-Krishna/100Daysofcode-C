//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int start = 0;
    for(int i=0; ; i++){
        if(s[i]==' ' || s[i]=='\0' || s[i]=='\n'){
            for(int j=i-1;j>=start;j--) printf("%c", s[j]);
            if(s[i]==' ') printf(" ");
            start = i+1;
        }
        if(s[i]=='\0' || s[i]=='\n') break;
    }

    return 0;
}
