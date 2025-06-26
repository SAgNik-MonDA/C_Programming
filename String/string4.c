#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int size = 0;
    while (str[size] != '\0') {
        size++;
    }

    for (int i = 0; i < size / 2; i++) {
        char temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;
    }

    printf("The reverse string is : %s\n", str);
    return 0;
}
