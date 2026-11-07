#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);                 // number of test cases

    while (t--) {
        long long n;
        scanf("%lld", &n);

        int last = n % 10;           // last digit
        while (n >= 10)
            n /= 10;                 // keep removing digits until one is left
        int first = n;               // first digit

        printf("%d\n", first + last);
    }
    return 0;
}