//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    const char *filename = "numbers.txt";
    int number;
    long long sum = 0;
    int count = 0;
    double average;

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        perror(filename);
        return 1;
    }

    while (fscanf(file_ptr, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file_ptr);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers were found in %s.\n", filename);
    }

    return 0;
}