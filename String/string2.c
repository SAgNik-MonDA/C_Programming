#include <stdio.h>
int main(){
    char str[20]="Aagnik Mondal";
    str[0]='S';
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}