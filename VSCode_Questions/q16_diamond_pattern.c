#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++) {
        int k = (i <= n) ? i : 2 * n - i;     // grows to n, then shrinks
        for (int s = 1; s <= n - k; s++) printf(" ");
        for (int j = 1; j <= 2 * k - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}