#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int *result = malloc(grades_count * sizeof(int));

    for (int i = 0; i < grades_count; i++) {
        int g = grades[i];
        if (g >= 38 && g % 5 >= 3) {
            g = g + (5 - g % 5);
        }
        result[i] = g;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int *grades = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    int result_count;
    int *result = gradingStudents(n, grades, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    free(grades);
    free(result);
    return 0;
}