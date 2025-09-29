#include <stdio.h>

int main() {
    int i, j, rows = 3, cols = 3;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
