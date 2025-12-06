//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct student s) {
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct student s1 = {"Rahul", 101, 87.5};

    printStudent(s1);   // passing structure variable to function

    return 0;
}