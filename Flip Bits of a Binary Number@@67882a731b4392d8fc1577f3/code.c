#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u", &num);

    // Perform bitwise NOT to flip all bits
    unsigned int flipped_num = ~num;
    printf("%u\n", flipped_num);

    return 0;
}
