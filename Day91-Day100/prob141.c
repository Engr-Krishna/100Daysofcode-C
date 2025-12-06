//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>
#include <string.h> 
struct Student {
    char name[50];  
    int roll_no;    
    float marks;   
};
int main() {
    struct Student s1;
    printf("--- Enter Student Data ---\n");
    printf("Enter Name");
    scanf("%49s", s1.name); 
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    printf("\n--- Student Record ---\n");
    printf("Name:      %s\n", s1.name);
    printf("Roll No:   %d\n", s1.roll_no);
    printf("Marks:     %.2f\n", s1.marks); 
    return 0;
}