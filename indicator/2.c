#include <stdio.h>

// UDF to print cube of a number using pointer
void printCube(int *p) {
    int x = *p;          // get value using pointer
    int cube = x * x * x;
    printf("%d  ", cube);
}

int main() {
    int a[10][10], n, i, j;

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printCube(&a[i][j]);   // pass address of each element
        }
        printf("\n");
    }

    return 0;
}
