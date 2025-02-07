#include <stdio.h>
int main(){
    double a, b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    if (c == '+') {
        printf("%d", (int)(a + b));  // Cast the result to int
    }
    else if (c == '-') {
        printf("%d", (int)(a - b));  // Cast the result to int
    }
    else if (c == '*') {
        printf("%d", (int)(a * b));  // Cast the result to int
    }
    else if (c == '/') {
        if (b != 0) {
            printf("%d", (int)(a / b));  // Cast the result to int
        } else {
            printf("Error: Division by zero!");
        }
    }
    else {
        printf("Error: Invalid operator!");
    }

    return 0;
}