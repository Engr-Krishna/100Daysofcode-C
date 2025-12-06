//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int vowels = 0, consonants = 0;
    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z')) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') vowels++;
            else consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}
