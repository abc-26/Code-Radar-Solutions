#include <stdio.h>
int main() {
    unsigned int num;
    int trailing_zeros = 0;
    scanf("%u", &num);
    while ((num & 1) == 0 && num != 0) {
        trailing_zeros++;
        num >>= 1;  // Right shift the number
    }
    printf("%d\n", trailing_zeros);
    return 0;
}
