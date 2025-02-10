#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(n<0 || n>31)
       return 1;
    int num = a & ~(1<<n);
    printf("%d",num);
    return 0;
}