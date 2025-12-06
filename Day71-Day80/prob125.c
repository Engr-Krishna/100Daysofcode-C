//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char filename[100];
    char textToAppend[1000];
    FILE *file_ptr;

    printf("Enter the name of the file to append to: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "a");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("File opened in append mode.\n");
    printf("Enter the text to append: ");

    while (getchar() != '\n');
    
    fgets(textToAppend, sizeof(textToAppend), stdin);

    fputs(textToAppend, file_ptr);

    fclose(file_ptr);

    printf("Text successfully appended to '%s'.\n", filename);

    return 0;
}