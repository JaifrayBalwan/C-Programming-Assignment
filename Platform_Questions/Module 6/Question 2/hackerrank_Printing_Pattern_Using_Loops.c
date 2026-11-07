#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // distance from the nearest edge of the square
            int d = i;
            if (j < d) d = j;
            if (size - 1 - i < d) d = size - 1 - i;
            if (size - 1 - j < d) d = size - 1 - j;

            if (j > 0) printf(" ");   // space only between numbers
            printf("%d", n - d);
        }
        printf("\n");
    }
    return 0;
}