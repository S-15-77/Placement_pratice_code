#include <stdio.h>

int main() {
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    k = 0;
    for (i = 1; i <= rows; ++i, k = 0) {
        for (j = 1; j <= rows - i; ++j) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("%d ",  k+1);
            ++k;
        }
        printf("\n");
    }
    return 0;
}