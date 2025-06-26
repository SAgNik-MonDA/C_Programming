#include <stdio.h>
int main(){
    char a;
    int  x;
    printf("enter the char : ");
    scanf("%c",&a);
    x=(a>=30&&a<=60?1:0);
    printf("the value of %d",x);
    return 0;
}