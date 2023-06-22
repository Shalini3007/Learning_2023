#include <stdio.h>

void print_IntegerBits(int num) {
    int i;
    unsigned int mask = 1 << 31; // Starting with the leftmost bit

    for (i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0; 
        printf("%d", bit);
        mask >>= 1;  // Shifting the mask to the right
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter the 32-bit integer: ");
    scanf("%d", &num);
    printf("IntegerBits: ");
    print_IntegerBits(num);

    return 0;
}