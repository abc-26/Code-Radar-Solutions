#include <stdio.h>
int main() {
    unsigned int num;
    int leading_zeros = 0;
    scanf("%u", &num);
    while (num >> (31 - leading_zeros) == 0 && leading_zeros < 32) {
        leading_zeros++;
    }

    printf("%d\n", leading_zeros);
    return 0;
}
