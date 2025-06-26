#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int size = 0;
    int k = 0;
    while (str[k] != '\0') {
        size++;
        k++;
    }

    printf("%d\n", size);
    return 0;
}
