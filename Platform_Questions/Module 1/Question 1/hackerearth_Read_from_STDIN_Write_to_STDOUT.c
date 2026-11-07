#include <stdio.h>

int main() {
    int n;
    char s[1005];

    scanf("%d", &n);
    scanf(" %[^\n]", s);      // reads the whole line, even if it has spaces

    printf("%d\n", n * 2);    // first line: the number multiplied by 2
    printf("%s\n", s);        // second line: the string as it is
    return 0;
}
