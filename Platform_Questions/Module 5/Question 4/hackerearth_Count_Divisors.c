#include <stdio.h>

int main() {
    long long l, r, k;
    scanf("%lld %lld %lld", &l, &r, &k);

    long long count = r / k - (l - 1) / k;   // multiples of k up to r, minus those below l
    printf("%lld\n", count);
    return 0;
}