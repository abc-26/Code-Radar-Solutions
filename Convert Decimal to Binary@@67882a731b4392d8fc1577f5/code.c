#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
    } else {
        
        int leading_zero = 1;  // Flag to detect leading zeros

        // Iterate through each bit from 31 to 0
        for (int i = 31; i >= 0; i--) {
            // Right shift the number and extract the bit at position i
            int bit = (num >> i) & 1;

            // Only print the bit if it's a 1 or we've already seen a 1
            if (bit == 1 || !leading_zero) {
                printf("%d", bit);
                leading_zero = 0;  // Set the flag to false after seeing the first 1
            }
        }
        printf("\n");
    }

    return 0;
}
