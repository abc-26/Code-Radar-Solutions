#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);  // Read signed integer
    
    // Perform bitwise NOT to flip all bits
    int flipped_num = ~num;
    printf("%d\n", flipped_num);

    return 0;
}
