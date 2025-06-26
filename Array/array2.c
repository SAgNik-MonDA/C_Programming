#include <stdio.h>

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 10}; // Correct size
    int *i, *j;
    i = &arr[4];
    j = (arr + 4);

    if (i == j)
        printf("Two pointers point to the same location\n");
    else
        printf("Do not point to the same location\n");

    return 0;
}
