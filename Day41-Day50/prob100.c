//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') len++;

    for(int i=0;i<len;i++){
        for(int j=1;j<=len-i;j++){
            for(int k=i;k<i+j;k++) printf("%c", s[k]);
            if(!(i==len-1 && j==1)) printf(",");
        }
    }

    return 0;
}
