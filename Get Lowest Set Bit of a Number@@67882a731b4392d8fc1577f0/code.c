#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        return 1;
    } else {
        int position = 1;
        // Find the lowest set bit by using bitwise AND with the negation of the number
        // and checking if the lowest bit is set at each position.
        if (n & 1) {
            printf("%d\n", position);
        } else if (n & 2) {
            printf("%d\n", position + 1);
        } else if (n & 4) {
            printf("%d\n", position + 2);
        } else if (n & 8) {
            printf("%d\n", position + 3);
        } else if (n & 16) {
            printf("%d\n", position + 4);
        } else if (n & 32) {
            printf("%d\n", position + 5);
        } else if (n & 64) {
            printf("%d\n", position + 6);
        } else if (n & 128) {
            printf("%d\n", position + 7);
        }
        // You can continue adding checks for higher powers of 2 if needed.
    }
    return 0;
}

