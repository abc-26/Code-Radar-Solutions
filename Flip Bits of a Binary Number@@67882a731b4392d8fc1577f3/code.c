#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u", &num);
    unsigned int flipped_num = 0;
    flipped_num = ~num;
    printf("%u\n", flipped_num);

    return 0;
}
