#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    char *words[] = {"zero", "one", "two", "three", "four",
                     "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++) {
        if (n <= 9)
            printf("%s\n", words[n]);   // 1 to 9 are printed as words
        else if (n % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}