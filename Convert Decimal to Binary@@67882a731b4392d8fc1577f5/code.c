#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 31; i >= 0; i--) {
        // Shift the number right by i bits and extract the bit at position i
        int bit = (num >> i) & 1;
        printf("%d", bit);  // Print the bit
    }
    
    printf("\n");

    return 0;
}
