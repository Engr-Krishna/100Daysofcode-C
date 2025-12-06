//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
struct Point {
    int x;
    int y;
};

int main() {
    struct Point my_point = {10, 20};
    struct Point *ptr_to_point;
    ptr_to_point = &my_point;
    printf(" Original Point \n");
    printf("X-coordinate: %d\n", ptr_to_point->x);
    printf("Y-coordinate: %d\n", ptr_to_point->y);
    ptr_to_point->x = 50;
    ptr_to_point->y = 99;
    printf("\n Modified Point \n");
    printf("X-coordinate (via variable): %d\n", my_point.x); 
    printf("Y-coordinate (via pointer): %d\n", ptr_to_point->y);
    return 0;
}