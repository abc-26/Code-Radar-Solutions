#include <stdio.h>
int main(){
    long num;
    scanf("%l",&num);
    if(num & 1)
       printf("Set");
    else
       printf("Not Set");
    return 0;
}