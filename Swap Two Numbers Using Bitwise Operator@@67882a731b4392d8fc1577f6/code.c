#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Swap the numbers using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Output the swapped values

    printf("%d ", a);
    printf("%d\n", b);

    return 0;
}
