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

    return 0;
}