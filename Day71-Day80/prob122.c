//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main() {
    char buffer[1000];
    FILE *file_ptr;

    file_ptr = fopen("info.txt", "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open the file info.txt.\n");
        printf("Please make sure the file exists and you have read permissions.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    printf("-----------------------\n");

    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    printf("-----------------------\n");
    printf("End of file.\n");

    fclose(file_ptr);

    return 0;
}