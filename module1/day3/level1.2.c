#include <stdio.h>

void bits(unsigned int num) {
    int i;
    int size = sizeof(num) * 8;
    for (i = size - 1; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;
        printf("%u", bit);
        if (i % 4 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    unsigned int integer;
    printf("Enter a 32-bit integer ");
    scanf("%u", &integer);
    printf("Bits are: ");
    bits(integer);

    return 0;
}