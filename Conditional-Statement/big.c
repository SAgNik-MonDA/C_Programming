#include <stdio.h>
int main(){
    int a,b,c,large;
    printf("enter the value of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    large =(a>b?(a>c?a:c):(b>c?b:c));
    printf("the biggest number is : %d",large);
    return 0;
}