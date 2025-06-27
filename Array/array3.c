// array reverse
#include <stdio.h>

void rev(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    rev(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
