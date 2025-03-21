#include <stdio.h>

int main() {
    int levels, i, j, num;

   
    scanf("%d", &levels);

   
    for (i = 1; i <= levels; i++) {
        for (j = 1; j <= levels - i; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}