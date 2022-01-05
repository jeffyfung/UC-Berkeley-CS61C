#include <stdio.h>

int bar(int *arr, size_t n) {
    int sum = 0, i;
    printf("n = %ld\n", n);
    for (i = n; i > 0; i--) {
        sum += !arr[i - 1];
        printf("triggered; i = %d; sum = %d\n", i, sum);
    }
    return ~sum + 1;
}

void main() {
    int arr[5] = {0, 0, 0, 1, 0};
    printf("%d\n", bar(arr, 2));
}