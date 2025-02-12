#include <stdio.h>
int main() {
    int num, n;
// Input the number and the position of the bit to be set
    scanf("%d", &num);
    scanf("%d", &n);
// Set the nth bit to 1 using bitwise OR
     num = num | (1 << n);

    // Print the decimal result (the updated number)
    printf("%d\n", num);

    // Print the binary representation without leading zeros
    int printed = 0;  // Flag to track whether we've printed the first 1 bit

    // Iterate through each bit from 31 to 0 to print binary
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        
        // Start printing once we hit the first 1 bit
        if (bit == 1) {
            printed = 1;
        }
        
        // Print the bit if it's either 1 or if we've already started printing
        if (printed) {
            printf("%d", bit);
        }
    }

    // If no bits were printed (num is 0), print 0 for the case of num being 0
    if (!printed) {
        printf("0");
    }
    
    printf("\n");

    return 0;
}
