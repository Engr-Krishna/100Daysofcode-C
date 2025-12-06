//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *file_ptr;

    file_ptr = fopen("info.txt", "w");

    if (file_ptr == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file_ptr, "Name: %s", name);
    fprintf(file_ptr, "Age: %d\n", age);

    fclose(file_ptr);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}