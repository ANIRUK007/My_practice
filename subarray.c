#include <stdio.h>

void subarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            printf("{");
            for (int k = i; k <= j; k++) {
                printf("%d", arr[k]);
                if (k < j) {
                    printf(",");
                }
            }
            printf("} ");
        }
    }
    printf("\n");
}

int main() {
    int a[50], temp, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements for array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Subarrays:\n");
    subarray(a, n);

    return 0;
}
