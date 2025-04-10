#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[n]; // To mark whether an element is already counted (0 -> not counted, 1 -> counted)

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = 0; // Initially, mark all elements as not counted
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == 1) {
            continue; // If already counted, skip
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq[j] = 1; // Mark duplicate elements
                count++;
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
