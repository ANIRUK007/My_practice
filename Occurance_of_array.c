#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20], str2[10];
    int flag = 0, first_index = -1, i, j;

    for (i = 0; i <= strlen(str1) - strlen(str2); i++) {
        flag = 1; // Assume a match until proven otherwise

        for (j = 0; j < strlen(str2); j++) {
            if (str1[i + j] != str2[j]) {
                flag = 0; // Not a match
                break;
            }
        }

        if (flag) {
            first_index = i;
            break; // Break the loop if a match is found
        }
    }

    if (first_index != -1) {
        printf("Substring found at index: %d\n", first_index);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
