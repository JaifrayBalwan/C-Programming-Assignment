#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;

    printf("%llu\n", fact);
    return 0;
}