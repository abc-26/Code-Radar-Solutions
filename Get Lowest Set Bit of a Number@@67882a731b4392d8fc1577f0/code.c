#include <stdio.h>
int main() {
    int num, position = 1;
    scanf("%d", &num);

    if (num == 0) {
        printf(" \n");
    } else {
        // Loop to find the position of the lowest set bit
        while ((num & 1) == 0) {
            num >>= 1;  // Right shift the number to check the next bit
            position++;
        }

        printf("%d", position);
    }

    return 0;
}
