// Sum of all Elements in a given row and column according to user input
#include <stdio.h>

int main() 
{
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    int rowNum, colNum;

    printf("Enter row number to find sum (0 to %d): ", row - 1);
    scanf("%d", &rowNum);

    printf("Enter column number to find sum (0 to %d): ", col - 1);
    scanf("%d", &colNum);

    int sumRow = 0, sumCol = 0;

    for (int j = 0; j < col; j++) {
        sumRow += a[rowNum][j];
    }

    for (int i = 0; i < row; i++) {
        sumCol += a[i][colNum];
    }

    printf("Sum of row %d = %d\n", rowNum, sumRow);
    printf("Sum of column %d = %d\n", colNum, sumCol);

    return 0;
}
