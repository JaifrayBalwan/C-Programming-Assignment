#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mid = (n + 1) / 2;                 // the widest row
    for (int i = 1; i <= n; i++) {
        int k = (i <= mid) ? i : n - i + 1;   // wing size, mirrored in the lower half
        int gap = 2 * (mid - k) + 1;          // space between the wings
        for (int j = 1; j <= k; j++) printf("*");
        for (int j = 1; j <= gap; j++) printf(" ");
        for (int j = 1; j <= k; j++) printf("*");
        printf("\n");
    }
    return 0;
}