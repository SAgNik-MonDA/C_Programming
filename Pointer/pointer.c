#include <stdio.h>
int main()
    {
        int i=10;
        int*x=&i;
        printf("%p\n",x);
        printf("%p",&i);
        return 0;
    }