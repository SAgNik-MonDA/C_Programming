#include <stdio.h>
int main(){
    int x,y;
    printf("enter the value of x : ");
    scanf("%d",&x);
    y=(x>10?5:6);
    printf("the value is : %d",y);
    return 0;
}