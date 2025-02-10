#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b<0 || b>31)
       return 1;
    int bit_value = (a >> b) & 1;
    printf("%d",bit_value);
    return 0;
}