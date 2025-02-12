#include <stdio.h>
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);

    num = num | (1 << n);

    
    // Print the binary representation of the result
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}
