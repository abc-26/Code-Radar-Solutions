#include <stdio.h>
int main(){
    long num;
    scanf("%ld",&num);
    if(num & 1)
       printf("Set");
    else
       printf("Not Set");
    return 0;
}