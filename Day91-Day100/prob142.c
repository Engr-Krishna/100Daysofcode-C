//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78}
    };
    int n = 3, max_idx = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[max_idx].marks)
            max_idx = i;
    }

    printf("Student with highest marks: %s (%d)\n", students[max_idx].name, students[max_idx].marks);
    return 0;
}