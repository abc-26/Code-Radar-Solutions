#include <stdio.h>
int main() {
    unsigned int num;

    // Input number
    
    scanf("%u", &num);  // Read unsigned integer
    
    // Perform bitwise NOT to flip all bits
    unsigned int flipped_num = ~num;
    printf("%u\n", flipped_num);

    return 0;
}
