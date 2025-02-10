#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b<0 || b>31)
       return 1;
    int a = a & ~(1<<b);
    printf("%d",b);
    return 0;
}