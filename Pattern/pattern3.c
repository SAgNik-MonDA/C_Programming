#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter the number of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==((n/2)+1)||i==((n/2)+1))
           { printf("*");}
            else{
            printf(" ");}
        }
        printf("\n");

    }
    return 0;

}