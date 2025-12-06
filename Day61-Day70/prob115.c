//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char t[1000];
    int charCount[26] = {0}; 
    int i, lenS, lenT;
    int isAnagram = 1; 

    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter the second string: ");
    fgets(t, sizeof(t), stdin);

    lenS = strlen(s);
    lenT = strlen(t);

    if (lenS > 0 && s[lenS - 1] == '\n') {
        s[lenS - 1] = '\0';
        lenS--;
    }
    if (lenT > 0 && t[lenT - 1] == '\n') {
        t[lenT - 1] = '\0';
        lenT--;
    }

    if (lenS != lenT) {
        isAnagram = 0;
    } else {
        for (i = 0; i < lenS; i++) {
            charCount[s[i] - 'a']++;
        }

        for (i = 0; i < lenT; i++) {
            charCount[t[i] - 'a']--;
            if (charCount[t[i] - 'a'] < 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}