#include <stdio.h>

int main() {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    // Kangaroo 1 starts behind (x1 < x2), so it must be faster,
    // and the gap must be an exact multiple of the speed difference.
    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}