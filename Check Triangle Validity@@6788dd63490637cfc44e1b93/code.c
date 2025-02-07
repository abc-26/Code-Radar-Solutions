#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    if((a+b>c) && (b+c>a) && (a+c>b))
       printf("Valid");
    else
       printf("Invalid");
    return 0;
}