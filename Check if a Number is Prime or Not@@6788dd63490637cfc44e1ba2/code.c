#include <stdio.h>

int prime(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;  
}

int main() {
    int n, fact_count;
    scanf("%d", &n);

    fact_count = prime(n);

    if (fact_count == 2) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}