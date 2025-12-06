//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    NUM_COLORS
};

const char* color_names[] = {
    "RED",
    "GREEN",
    "BLUE",
    "YELLOW"
};

int main() {
    printf("Enum Members and Values:\n");
    printf("--------------------------\n");

    for (int i = 0; i < NUM_COLORS; i++) {
        printf("Name: %-10s Value: %d\n", color_names[i], i);
    }

    return 0;
}