//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float grade;
};
struct Student getTopStudent() {
    struct Student topStudent;
    topStudent.id = 1;
    snprintf(topStudent.name, sizeof(topStudent.name), "Alice Johnson");
    topStudent.grade = 95.5;

    return topStudent;
}

int main() {
    struct Student top = getTopStudent();

    printf("Top Student Details:\n");
    printf("ID: %d\n", top.id);
    printf("Name: %s\n", top.name);
    printf("Grade: %.2f\n", top.grade);

    return 0;
}