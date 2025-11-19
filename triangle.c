#include <stdio.h>

int main() {
    int i, j, s, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++) {
    for(s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}