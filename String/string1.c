#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Your input is: %s\n", str);
    return 0;
}
