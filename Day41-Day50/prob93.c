//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    int freq1[256] = {0}, freq2[256] = {0};
    for(int i=0; s1[i] != '\0' && s1[i] != '\n'; i++) freq1[(int)s1[i]]++;
    for(int i=0; s2[i] != '\0' && s2[i] != '\n'; i++) freq2[(int)s2[i]]++;

    int flag = 1;
    for(int i=0; i<256; i++){
        if(freq1[i] != freq2[i]){
            flag = 0;
            break;
        }
    }

    if(flag) printf("Anagrams");
    else printf("Not anagrams");

    return 0;
}
