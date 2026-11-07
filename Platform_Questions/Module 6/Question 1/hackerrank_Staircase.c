#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");          // leading spaces
        for (int h = 1; h <= i; h++)
            printf("#");          // hash symbols
        printf("\n");
    }
    return 0;
}