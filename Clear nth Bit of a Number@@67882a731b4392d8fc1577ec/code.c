#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = ~(1<<b);
    a = a & c;
    printf("%d",a);
    return 0;
}