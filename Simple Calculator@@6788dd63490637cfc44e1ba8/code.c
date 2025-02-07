#include <stdio.h>
int main(){
    double a, b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    if (c == '+')
       printf("%.2f",a+b);
    else if (c == '-')
       printf("%lf",a-b);
    else if (c == '*')
       printf("%lf",a*b);
    else if (c == '/')
       printf("%lf",a/b);
    else 
       printf("Error");
    return 0;
}