#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");    // space only between numbers
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}