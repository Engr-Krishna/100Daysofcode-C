//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    int len1 = 0, len2 = 0;
    while(s1[len1] != '\0' && s1[len1] != '\n') len1++;
    while(s2[len2] != '\0' && s2[len2] != '\n') len2++;

    if(len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    char temp[2000];
    for(int i=0;i<len1;i++) temp[i] = s1[i];
    for(int i=0;i<len1;i++) temp[len1+i] = s1[i];
    temp[2*len1] = '\0';

    int flag = 0;
    for(int i=0;i<len1;i++){
        int match = 1;
        for(int j=0;j<len1;j++){
            if(temp[i+j] != s2[j]) { match = 0; break; }
        }
        if(match) { flag = 1; break; }
    }

    if(flag) printf("Rotation");
    else printf("Not rotation");

    return 0;
}
