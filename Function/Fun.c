#include <stdio.h>

int calsum(int x, int y, int z) {
    int s;
    s = x + y + z;
    return s;
}

int main() {
    int a, b, c, sum;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    sum = calsum(a, b, c);
    printf("\nSum = %d", sum);
    
    return 0;
}
