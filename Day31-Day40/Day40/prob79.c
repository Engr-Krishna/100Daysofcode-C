//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Traverse diagonals starting from first column
    for(int startRow = 0; startRow < m; startRow++) {
        int i = startRow, j = 0;
        while(i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    // Traverse diagonals starting from last row of first row
    for(int startCol = 1; startCol < n; startCol++) {
        int i = m - 1, j = startCol;
        while(i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}