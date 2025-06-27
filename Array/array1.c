// array with pointer
#include <stdio.h>
int main(){
    int arr[7]={1,5,9,12,56,88,52};
    int *i,*j;
    i=&arr[1];
    j=&arr[5];
    printf("%d\n%d",(j-i),(*j-*i));
    return 0;
}